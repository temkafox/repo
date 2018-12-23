/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:53:24 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/14 05:59:54 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*flag;

	p = (char*)s;
	flag = NULL;
	if (c == '\0')
		return ((char*)&s[ft_strlen((char*)s)]);
	while (*p != '\0')
	{
		if (*p == c)
			flag = p;
		p++;
	}
	if (flag)
		return (flag);
	else
		return (NULL);
}
