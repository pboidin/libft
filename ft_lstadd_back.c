/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:10:04 by piboidin          #+#    #+#             */
/*   Updated: 2021/12/01 19:02:04 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_el;

	if (!alst || !new)
		return ;
	if (*alst && alst)
	{
		last_el = *alst;
		while (last_el->next)
			last_el = last_el->next;
		last_el->next = new;
	}
	else
		*alst = new;
}
