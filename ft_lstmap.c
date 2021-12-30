/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:04 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 18:25:27 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;

	(void)del;
	if (!lst)
		return (NULL);
	new_lst = malloc(sizeof(t_list) * 1);
	if (!(new_lst))
		return (NULL);
	new_el = new_lst;
	while (lst)
	{
		new_lst->content = f(lst->content);
		lst = lst->next;
		if (lst)
		{
			new_lst->next = malloc(sizeof(t_list) * 1);
			if (!(new_lst))
				return (NULL);
			new_lst = new_lst->next;
		}
		else
			new_lst->next = NULL;
	}
	return (new_el);
}
