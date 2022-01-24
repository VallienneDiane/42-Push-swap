/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:03:13 by dvallien          #+#    #+#             */
/*   Updated: 2021/12/18 16:22:33 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new_node)
{
	t_list	*tmp_node;

	if (!*list)
		*list = new_node;
	else
	{
		tmp_node = ft_lstlast(*list);
		tmp_node->next = new_node;
	}
}
