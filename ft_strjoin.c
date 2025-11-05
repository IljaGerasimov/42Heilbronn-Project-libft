/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:45:18 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/02 14:25:14 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_s;
	size_t	i;
	size_t	j;
	size_t	total;
	size_t	counter;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i > (SIZE_MAX - j))
		return (NULL);
	total = i + j;
	joined_s = malloc((total + 1) * (sizeof(char)));
	if (!joined_s)
		return (NULL);
	counter = 0;
	while (counter < i)
		joined_s[counter++] = *s1++;
	while (i < total)
		joined_s[i++] = *s2++;
	joined_s[total] = '\0';
	return (joined_s);
}
