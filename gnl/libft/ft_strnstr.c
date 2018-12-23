/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:04:50 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/18 17:08:45 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	p = (char*)haystack;
	if (len == 0)
		return (NULL);
	while ((p[i] != '\0') && (needle[j] != '\0') && (i < len))
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j < len))
		{
			j++;
			if (needle[j] == '\0')
				return (&p[i]);
		}
		i++;
	}
	if (needle[j] == '\0')
		return (&p[i]);
	return (0);
}
