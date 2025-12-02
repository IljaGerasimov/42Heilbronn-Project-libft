/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 08:32:29 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/13 01:03:41 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*str1;
	size_t		i;
	size_t		len;

	len = ft_strlen(s);
	str1 = (char *)malloc(len + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		str1[i] = s[i];
		i++;
	}
	return (str1);
}
