/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 16:47:13 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/22 16:58:27 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len + 1);
	ft_strlcat(s, s2, len + 1);
	return (s);
}
