/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:26:25 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 23:00:15 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;
	size_t			i;

	i = 0;
	str_s1 = (unsigned char*)s1;
	str_s2 = (unsigned char*)s2;
	while ((str_s1[i] != '\0' || str_s2[i] != '\0') && i < n)
	{
		if (str_s1[i] == str_s2[i])
			i++;
		else
			return (str_s1[i] - str_s2[i]);
	}
	return (0);
}
