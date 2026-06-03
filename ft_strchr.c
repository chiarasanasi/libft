/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanasi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:02:01 by csanasi           #+#    #+#             */
/*   Updated: 2026/05/26 15:00:36 by csanasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr;
	int			i;

	i = 0;
	if ((char)c == '\0')
	{
		ptr = &s[ft_strlen(s)];
		return ((char *)ptr);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			ptr = &s[i];
			return ((char *)ptr);
		}
		i++;
	}
	return (NULL);
}
