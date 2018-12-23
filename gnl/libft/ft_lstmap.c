/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:26:44 by ldonnis           #+#    #+#             */
/*   Updated: 2018/12/19 13:40:02 by ldonnis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_listdelete(void *content, size_t size)
{
	free(content);
	size = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*head;
	void	(*del)(void *, size_t);

	del = &ft_listdelete;
	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	head = tmp;
	lst = lst->next;
	while (lst != NULL)
	{
		new = f(lst);
		tmp->next = new;
		tmp = new;
		lst = lst->next;
		if (!tmp)
			ft_lstdel(&head, del);
	}
	return (head);
}
