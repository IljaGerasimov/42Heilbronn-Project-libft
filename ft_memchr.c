/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:34:46 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/30 18:54:15 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*st;
	size_t				i;

	st = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
