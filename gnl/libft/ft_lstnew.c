/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 12:45:48 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/18 18:25:51 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*str;

	if (!(str = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		str->content = NULL;
		str->content_size = 0;
	}
	else
	{
		if (!(str->content = (void *)malloc(content_size)))
		{
			free(str);
			return (NULL);
		}
		str->content = ft_memcpy(str->content, content, content_size);
		str->content_size = content_size;
	}
	str->next = NULL;
	return (str);
}
