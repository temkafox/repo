/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 20:02:35 by ldonnis           #+#    #+#             */
/*   Updated: 2019/01/08 20:50:12 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int				get_next_line(const int fd, char **line)
{
	static char	*tmp;
	char		buf[BUFF_SIZE + 1];
	int			ret;
	size_t		len;

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
			(*line) = ft_strsub(tmp, 0, len);
			tmp = ft_strchr(tmp, '\n') + 1;
			return (1);
		}
		if (((ret = read(fd, buf, BUFF_SIZE)) < 0))
			return (-1);
		buf[ret] = '\0';
		tmp = ft_strjoin(tmp, buf);
		if (!ret && ft_strchr(tmp, '\0'))
		{
			(*line) = ft_strsub(tmp, 0, ft_strlen(tmp));
			ft_strdel(&tmp);
			return (0);
		}
	}
}
