/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 03:44:58 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/29 08:27:15 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*tmp;
	size_t	total_size;

	if (size > 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	tmp = (char *)ptr;
	while (total_size--)
		*tmp++ = 0;
	return (ptr);
}
