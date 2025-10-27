/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:30:42 by igerasim          #+#    #+#             */
/*   Updated: 2025/10/15 06:37:26 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
	{
		return (a);
	}
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = '1';
// 	if (isdigit(c))
// 	{
// 		printf("%d\n", c);
// 	}
// 	if (ft_isdigit(c))
// 	{
// 		printf("%d\n", c);
// 	}
// }
