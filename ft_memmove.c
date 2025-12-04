/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 05:17:17 by igerasim          #+#    #+#             */
/*   Updated: 2025/12/04 21:13:03 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			(((unsigned char *)dest)[i] = ((const unsigned char *)src)[i]);
			i++;
		}
	}
	else if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((const unsigned char *)src)[n];
	}
	return (dest);
}
