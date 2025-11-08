/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:45:18 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/08 03:28:25 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_s;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total;
	size_t	i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len > (SIZE_MAX - s2_len))
		return (NULL);
	total = s1_len + s2_len;
	joined_s = malloc((total + 1) * (sizeof(char)));
	if (!joined_s)
		return (NULL);
	i = 0;
	while (i < s1_len)
		joined_s[i++] = *s1++;
	while (s1_len < total)
		joined_s[s1_len++] = *s2++;
	joined_s[total] = '\0';
	return (joined_s);
}
