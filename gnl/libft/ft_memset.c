/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:13:30 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:10:54 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	if (len == 0)
		return (b);
	p = (unsigned char*)b;
	while (len-- > 0)
	{
		*p = c;
		p++;
	}
	return (b);
}
