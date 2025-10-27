/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 05:04:53 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/18 18:23:40 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (a);
	}
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'b';
// 	if (isalpha(c))
// 	{
// 		printf("%d\n", c);
// 	}
// 	if (ft_isalpha(c))
// 	{
// 		printf("%d\n", c);
// 	}
// }
