/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:14:39 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/18 20:09:27 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str_dst;
	unsigned char *str_src;

	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	if (str_src == str_dst)
		return (dst);
	if (str_src > str_dst)
	{
		while (len-- > 0)
			*str_dst++ = *str_src++;
	}
	else
	{
		while (len-- > 0)
			*(str_dst + len) = *(str_src + len);
	}
	return (dst);
}
