/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 05:17:17 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/23 00:59:58 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include<stdio.h> 
#include<string.h> 

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest_str;
	s = (const unsigned char *)src_str;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	return (dest_str);
}

// int	main(void)
// {
// 	char csrc[100] = "GeeksforGeeks";

// 	ft_memmove(&csrc[5], &csrc[0], strlen(csrc) + 1);
// 	printf("%s", csrc);
// 	return (0);
// }
