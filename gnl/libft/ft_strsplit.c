/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 03:00:53 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/18 19:36:55 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_freesplit(char **dst, int i)
{
	i--;
	while (i > -1)
	{
		free(dst[i]);
		i--;
	}
	free(dst);
}

static int		ft_memword(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
		}
	}
	return (count);
}

static int		ft_wordlen(char const *s, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**dst;
	int		j;
	int		n;
	int		count;

	i = 0;
	j = 0;
	if (!s || !(dst = (char**)malloc(sizeof(*dst) * (ft_memword(s, c) + 1))))
		return (NULL);
	count = ft_memword(s, c);
	while (i < count)
	{
		n = 0;
		if (!(dst[i] = ft_strnew(ft_wordlen(&s[j], c) + 1)))
			ft_freesplit(dst, i);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			dst[i][n++] = s[j++];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
