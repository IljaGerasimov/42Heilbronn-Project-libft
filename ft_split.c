/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:14:03 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/06 22:57:03 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}

static size_t	ft_wlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char	**ft_copyloop(char const *s, char **array, char c, size_t wcount)
{
	size_t	wlen;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < wcount)
	{
		while (*s == c && *s != '\0')
			s++;
		wlen = ft_wlen(s, c);
		array[i] = (char *)malloc(wlen + 1);
		if (!array[i])
			return (ft_free_array(array));
		j = 0;
		while (j < wlen)
			array[i][j++] = *s++;
		array[i][wlen] = '\0';
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wcount;
	size_t	i;

	if (!s)
		return (NULL);
	wcount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wcount++;
		i++;
	}
	array = (char **)ft_calloc((wcount + 1), sizeof(char *));
	if (!array)
		return (NULL);
	return ((char **)ft_copyloop(s, array, c, wcount));
}
