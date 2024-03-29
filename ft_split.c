/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piboidin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:17:07 by piboidin          #+#    #+#             */
/*   Updated: 2021/11/25 14:19:01 by piboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_charset(char s, char c)
{
	if (c == s)
		return (1);
	return (0);
}

int	ft_count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && ft_is_charset(*s, c))
			s++;
		if (*s && !(ft_is_charset(*s, c)))
		{
			count++;
			while (*s && !(ft_is_charset(*s, c)))
				s++;
		}
	}
	return (count);
}

char	*ft_malloc_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !(ft_is_charset(s[i], c)))
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!(word))
		return (NULL);
	i = 0;
	while (s[i] && !(ft_is_charset(s[i], c)))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		count;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	count = ft_count_word(s, c);
	while (*s && (i < count))
	{
		while (*s && ft_is_charset(*s, c))
			s++;
		if (*s && !(ft_is_charset(*s, c)))
		{
			tab[i] = ft_malloc_word(s, c);
			s++;
			while (*s && !(ft_is_charset(*s, c)))
				s++;
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
