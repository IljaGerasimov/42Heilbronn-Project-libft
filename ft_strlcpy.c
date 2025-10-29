/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:00:20 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/29 08:18:48 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	const char	*s;
	size_t		i;

	s = src;
	i = 0;
	if (n == 0)
	{
		while (*s)
			s++;
		return (s - src);
	}
	while (i < n - 1 && *s)
	{
		*dst++ = *s++;
		i++;
	}
	*dst = '\0';
	while (*s)
		s++;
	return (s - src);
}
