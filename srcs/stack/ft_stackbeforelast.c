/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackbeforelast.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:10:13 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 12:15:13 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

t_stack	*ft_stackbeforelast(t_stack *list)
{
	t_stack	*temp;
	t_stack	*before;

	temp = list;
	before = list;
	while (temp->next)
	{
		before = temp;
		temp = temp->next;
	}
	return (before);
}
