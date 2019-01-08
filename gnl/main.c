/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 15:38:13 by ldonnis           #+#    #+#             */
/*   Updated: 2019/01/08 20:41:56 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	char *line;
	int i = 1;
	int g;

	g = 0;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (i != 8)
		{
			g = get_next_line(fd, &line);
			printf("---\nGNL%d: %s\n", i, line);
			printf("g:%d \n", g);
			i++;
		}
	}
	return (0);
}
