/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igerasim <igerasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 04:49:35 by igerasim          #+#    #+#             */
/*   Updated: 2025/11/07 05:22:30 by igerasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;

	if (lst && del)
	{
		while (*lst)
		{
			current_node = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = current_node;
		}
	}
}
