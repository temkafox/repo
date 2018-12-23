/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:06:50 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:05:28 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (((unsigned char*)src)[i] != '\0')
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	(((unsigned char*)dst)[i] = '\0');
	return (dst);
}
