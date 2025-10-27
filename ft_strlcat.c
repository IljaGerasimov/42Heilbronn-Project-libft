/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 02:46:08 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/27 04:10:29 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = src;
	d = dst;
	i = 0;
	if (n == 0)
	{
		while (*s)
			s++;
		return (s - src);
	}
	if (n > 0)
	{
		while (*d)
			d++;
		while (*s)
			s++;
	}
	while (src[i] != '\0' && (((d - dst + i) < n - 1)))
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return ((d - dst) + (s - src));
}
