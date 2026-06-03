/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:39:10 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/23 15:36:33 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1ptr;
	unsigned char	*s2ptr;
	size_t			i;

	s1ptr = (unsigned char *)s1;
	s2ptr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1ptr[i] != s2ptr[i])
			return (s1ptr[i] - s2ptr[i]);
		i++;
	}
	return (0);
}
