/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 12:15:38 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/23 15:33:18 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_array_memb(char **s, size_t len)
{
	while (len > 0)
	{
		len--;
		free(s[len]);
	}
}

static char	**ft_free_array(char **a, size_t i)
{
	ft_free_array_memb(a, i);
	free(a);
	return (NULL);
}

static char	**ft_create_split(size_t cn, char const *s, char c, char **a)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = 0;
	z = 0;
	while (i < cn && s[j] != '\0')
	{
		if (s[j] != c)
		{
			while (s[j + z] != c && s[j + z] != '\0')
				z++;
			a[i] = ft_substr(s, j, z);
			if (!a[i])
				return (ft_free_array(a, i));
			j = j + z;
			z = 0;
			i++;
		}
		j++;
	}
	return (a);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	char	**array;

	i = 0;
	counter = 0;
	if (!s)
		return (NULL);
	if (s[0] != c && s[0] != '\0')
		counter++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			counter++;
		i++;
	}
	array = ft_calloc(counter + 1, sizeof(char *));
	if (!array)
		return (NULL);
	return (ft_create_split(counter, s, c, array));
}
