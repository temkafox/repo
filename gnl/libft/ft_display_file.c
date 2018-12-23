/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:08:43 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/20 16:15:18 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_display_file(char *filename)
{
	int		fd;
	char	c;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		write(2, "Error", 6);
		return ;
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}
