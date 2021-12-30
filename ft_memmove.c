/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:15:26 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 12:03:27 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (p1 < p2)
	{
		while (i++ < n)
			p2[n - i] = p1[n - i];
		return (dest);
	}
	while (i < n)
	{
		p2[i] = p1[i];
		i++;
	}
	return (dest);
}
