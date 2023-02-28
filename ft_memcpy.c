/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <piboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:14:39 by piboidin          #+#    #+#             */
/*   Updated: 2021/12/01 18:22:08 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmp1 = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	while (i < n)
	{
		tmp2[i] = tmp1[i];
		i++;
	}
	return (dest);
}
