/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:00:15 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 19:03:53 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len_str(int n)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (n == 0)
		count++;
	if (n < 0)
	{
		nb = -n;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	unsigned int	un;

	i = ft_len_str(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	un = 0;
	if (n < 0)
		un = -n;
	else
		un = n;
	if (n == 0)
		str[0] = '0';
	while (0 < un)
	{
		str[i] = ((un % 10) + 48);
		un /= 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
