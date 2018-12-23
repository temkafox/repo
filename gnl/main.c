/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 15:38:13 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/23 22:21:16 by ldonnis          ###   ########.fr       */
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

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (i != 11)
		{
			get_next_line(fd, &line);
			printf("---\nGNL%d: %s\n", i, line);
			i++;
		}
	}
	return (0);
}