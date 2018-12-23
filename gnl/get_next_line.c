/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 20:02:35 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/23 22:19:39 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	static char *tmp = 0;
	char buf[BUFF_SIZE + 1];
	int ret;
	size_t len;

	ret = 0;
	if (fd == -1 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	if (!tmp)
		tmp = ft_strnew(BUFF_SIZE);
	while (1)
	{
		if (ft_strchr(tmp, '\n'))
			{
				len = ft_strlen(tmp) - ft_strlen(ft_strchr(tmp, '\n'));
				//printf("LEN:%zu\n", len);
				(*line) = ft_strsub(tmp, 0, len);
				tmp = ft_strchr(tmp, '\n') + 1;
				//printf("TMP:%s\n", tmp);
				//printf("LINE:%s\n", *line);
				break ;
			}
		if (((ret = read(fd, buf, BUFF_SIZE)) < 0))
			return (0);
		buf[ret] = '\0';
		tmp = ft_strjoin(tmp, buf);
		if (ft_strchr(tmp, '\n'))
		{
			len = ft_strlen(tmp) - ft_strlen(ft_strchr(tmp, '\n'));
			(*line) = ft_strsub(tmp, 0, len);
			//printf("LEN:%zu\n", len);
			//printf("LEN_TMP:%zu\n", ft_strlen(tmp));
			//printf("LEN_TMP_'n':%zu\n", ft_strlen(ft_strchr(tmp, '\n')));
			tmp = ft_strsub(tmp, len + 1, ft_strlen(buf) - len);
			//printf("TMP----%s\n", tmp);
			break ;
		}
		if (!ret && !ft_strchr(tmp, '\n'))
		{
			(*line) = ft_strsub(tmp, 0, ft_strlen(tmp));
			return (0);
		}
	}
	return (1);
}
