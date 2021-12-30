/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:21:57 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 14:09:02 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len > j)
		len = j;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
		i++;
	j = 0;
	while (j < len && start < i)
		str[j++] = s[start++];
	str[j] = 0;
	return (str);
}
