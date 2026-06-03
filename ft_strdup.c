/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:08:03 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/22 16:26:13 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*m;
	size_t	i;

	i = ft_strlen(s);
	m = malloc(i + 1);
	if (!m)
		return (NULL);
	ft_strlcpy(m, s, i + 1);
	return (m);
}
