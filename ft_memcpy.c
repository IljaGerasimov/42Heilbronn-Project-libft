/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:13:09 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/20 05:04:39 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src_str;
	d = (unsigned char *)dest_str;
	if (dest_str == NULL && src_str == NULL)
		return (NULL);

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest_str);
}

// int	main(void)
// {
// 	int	from = 19;
// 	int	to = 27;

// 	ft_memcpy(&to, &from, sizeof(int));
// 	printf("Value of to after calling ft_memcpy: %d\n", to);

// 	return (0);
// }
