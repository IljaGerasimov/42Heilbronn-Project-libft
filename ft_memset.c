/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:06:54 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/16 21:04:16 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, int len)
{
	unsigned char	*st;

	st = str;
	if (*st == 0)
		return (str);

	while (len > 0)
	{
		*st = c;
		st++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "1234";

	ft_memset(str, 'Z', 3);
	printf("%s\n", str);
	return (0);
}
