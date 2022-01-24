/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 14:37:00 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 12:11:04 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_reverse_a(t_stack **stack_a)
{
	t_stack	*temp;

	if (ft_stacksize(*stack_a) > 1)
	{
		temp = ft_stacklast(*stack_a);
		ft_stackbeforelast(*stack_a)->next = NULL;
		temp->next = *stack_a;
		*stack_a = temp;
		write (1, "rra\n", 4);
	}
}

void	ft_reverse_b(t_stack **stack_b)
{
	t_stack	*temp;

	if (ft_stacksize(*stack_b) > 1)
	{
		temp = ft_stacklast(*stack_b);
		ft_stackbeforelast(*stack_b)->next = NULL;
		temp->next = *stack_b;
		*stack_b = temp;
		write (1, "rrb\n", 4);
	}
}

void	ft_reverse_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_a(stack_a);
	ft_reverse_b(stack_b);
	write (1, "rrr\n", 4);
}
