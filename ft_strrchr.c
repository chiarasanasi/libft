/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:14:56 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/26 15:07:39 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	int			len;

	len = ft_strlen(s);
	if ((char)c == '\0')
	{
		ptr = &s[len];
		return ((char *)ptr);
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			ptr = &s[len];
			return ((char *)ptr);
		}
		len--;
	}
	return (NULL);
}
