/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:10:40 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/24 18:10:42 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*old_el;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		old_el = *lst;
		*lst = old_el->next;
		free(old_el);
	}
	*lst = NULL;
}
