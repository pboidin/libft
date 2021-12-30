/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:18:52 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 13:41:18 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				src_len;
	unsigned int	dst_len;
	unsigned int	i;

	i = 0;
	src_len = 0;
	dst_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (size && (--size - dst_len) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
