/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:44:17 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:11:14 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str_s1;
	const unsigned char *str_s2;

	if (n == 0 || s1 == s2)
		return (0);
	str_s1 = (const unsigned char*)s1;
	str_s2 = (const unsigned char*)s2;
	while (n--)
	{
		if (*str_s1 != *str_s2)
			return (*str_s1 - *str_s2);
		if (n)
		{
			str_s1++;
			str_s2++;
		}
	}
	return (0);
}
