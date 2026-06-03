/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:34:34 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/26 14:44:32 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	i;

	if (!dest || !src)
		return (NULL);
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			ptrdest[n] = ptrsrc[n];
	}
	else
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
