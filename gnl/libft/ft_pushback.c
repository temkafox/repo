/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 16:20:34 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/20 16:54:07 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_pushback(t_list *head, void const *content, size_t content_size)
{
	t_list *tmp;
	t_list *p;

	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	p = ft_lstnew(content, content_size);
	tmp->next = p;
	return (*head);
}
