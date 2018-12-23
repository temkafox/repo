/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:40:00 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:05:48 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*p;
	char			*flag;
	int				i;

	i = 0;
	c = (unsigned char)c;
	p = (unsigned char*)s;
	flag = NULL;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			return (&((char*)p)[i]);
		i++;
	}
	if ((c == 0) && (p[i] == '\0'))
		return (&((char*)p)[i]);
	return (NULL);
}
