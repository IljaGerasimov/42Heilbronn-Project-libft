/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 08:05:34 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/30 20:54:25 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	last_c;
	size_t			s_len;

	last_c = (unsigned char)c;
	s_len = ft_strlen(s);
	if (last_c == '\0')
		return ((char *)&s[s_len]);
	while (s_len > 0)
	{
		s_len--;
		if ((unsigned char)s[s_len] == last_c)
			return ((char *)&s[s_len]);
	}
	return (NULL);
}
