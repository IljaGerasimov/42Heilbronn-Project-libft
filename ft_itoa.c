/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:00:54 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/05 06:11:39 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int		len;
	long	n_copy;

	len = 0;
	n_copy = n;
	if (n_copy == 0)
		return (1);
	if (n_copy < 0)
	{
		len++;
		n_copy *= -1;
	}
	while (n_copy > 0)
	{
		n_copy /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*chr;
	int		len;
	long	long_n;

	long_n = n;
	len = (ft_len(n));
	chr = malloc(len + 1);
	if (!chr)
		return (NULL);
	if (n == 0)
		chr[0] = '0';
	if (n < 0)
	{
		chr[0] = '-';
		long_n *= -1;
	}
	chr[len] = '\0';
	while (long_n > 0)
	{
		chr[len - 1] = (long_n % 10) + '0';
		long_n /= 10;
		len--;
	}
	return (chr);
}
