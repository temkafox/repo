/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:26:02 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:04:38 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;
	size_t			i;

	i = 0;
	str_s1 = (unsigned char*)s1;
	str_s2 = (unsigned char*)s2;
	while (str_s1[i] != '\0' || str_s2[i] != '\0')
	{
		if (str_s1[i] == str_s2[i])
			i++;
		else
			return (str_s1[i] - str_s2[i]);
	}
	return (0);
}
