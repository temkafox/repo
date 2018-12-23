/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:25:11 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/19 13:23:55 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str_dst;
	unsigned char *str_src;

	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	if (str_dst == str_src)
		return (dst);
	while (n-- > 0)
		*str_dst++ = *str_src++;
	return (dst);
}
