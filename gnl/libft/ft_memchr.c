/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:31:11 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:13:13 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str_s;

	str_s = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*str_s == (unsigned char)c)
			return (str_s);
		str_s++;
	}
	return (NULL);
}
