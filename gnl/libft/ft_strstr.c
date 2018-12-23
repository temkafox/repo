/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:50:55 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/11 22:55:03 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*p;
	int		i;
	int		j;
	int		len;

	len = 0;
	i = 0;
	p = (char*)haystack;
	while (needle[len] != '\0')
		len++;
	if (len == 0)
		return (p);
	while (*p++ != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (j == len - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
