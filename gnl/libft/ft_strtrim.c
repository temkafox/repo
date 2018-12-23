/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 00:41:24 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/14 06:08:27 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		l;
	int		i;
	char	*dst;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen((char*)s);
	len--;
	i = 0;
	l = 0;
	if (ft_isablank((char*)s))
		return (dst = ft_strnew(0));
	while ((s[len] == '\t' || s[len] == '\n'
			|| s[len] == ' ') && s[len] != '\0')
		len--;
	while ((s[l] == '\t' || s[l] == '\n' || s[l] == ' ') && s[l] != '\0')
		l++;
	if (!(dst = ft_strnew(len - l + 1)))
		return (NULL);
	while (l <= len)
		dst[i++] = s[l++];
	return (dst);
}
