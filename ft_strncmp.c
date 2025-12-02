/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:14:38 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/07 04:18:54 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sc1;
	const unsigned char	*sc2;

	i = 0;
	sc1 = (const unsigned char *)s1;
	sc2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((sc1[i] != sc2[i]) || !sc1[i])
			return ((int)(sc1[i] - sc2[i]));
		i++;
	}
	return (0);
}
