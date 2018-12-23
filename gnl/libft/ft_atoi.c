/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:23:14 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/19 13:18:06 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoinegative(int i, const char *str, int negative)
{
	if (str[i] == '-')
		negative = -1;
	return (negative);
}

static int	ft_atoitest(int i, const char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	return (i);
}

static int	ft_checkover(long long int result, int negative)
{
	if (result < 0 && negative == 1)
		return (-1);
	else if (result < 0 && negative == -1)
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				negative;
	long long int	result;

	negative = 1;
	i = 0;
	result = 0;
	i = ft_atoitest(i, str);
	negative = ft_atoinegative(i, str, negative);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
		if (ft_checkover(result, negative) <= 0)
			return (ft_checkover(result, negative));
	}
	return (result * negative);
}
