/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:48:38 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/07 04:17:19 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	dec;
	int	negative;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	negative = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negative = -1;
		nptr++;
	}
	dec = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		dec = (dec * 10) + (*nptr - '0');
		nptr++;
	}
	return (dec * negative);
}
