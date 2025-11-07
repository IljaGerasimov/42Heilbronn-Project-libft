/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:06:38 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/05 20:47:39 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	long_n;
	char	n_buf[10];
	int		i;

	long_n = n;
	if (long_n == 0)
		return (ft_putchar_fd('0', fd));
	if (long_n < 0)
	{	
		ft_putchar_fd('-', fd);
		long_n *= -1;
	}
	i = 0;
	if (long_n > 0)
	{
		while (long_n > 0)
		{
			n_buf[i++] = (long_n % 10) + '0';
			long_n /= 10;
		}
		while (i--)
			ft_putchar_fd(n_buf[i], fd);
	}
}
