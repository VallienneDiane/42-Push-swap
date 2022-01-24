/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:58:34 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 14:27:37 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_stackadd_back(t_stack **list, t_stack *new_node)
{
	t_stack	*tmp_node;

	if (!*list)
		*list = new_node;
	else
	{
		tmp_node = ft_stacklast(*list);
		tmp_node->next = new_node;
	}
}
