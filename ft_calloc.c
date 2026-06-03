/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:12:32 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/22 15:45:40 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*m;
	size_t	totsize;
	size_t	i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	totsize = nmemb * size;
	m = malloc(totsize);
	if (!m)
		return (NULL);
	i = 0;
	while (i < totsize)
	{
		m[i] = 0;
		i++;
	}
	return ((void *)m);
}
