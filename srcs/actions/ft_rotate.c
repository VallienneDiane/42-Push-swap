/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 12:42:11 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 12:09:32 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_rotate_a(t_stack **stack_a)
{
	t_stack	*temp;

	temp = *stack_a;
	ft_stacklast(*stack_a)->next = temp;
	*stack_a = temp->next;
	temp->next = NULL;
	write (1, "ra\n", 3);
}

void	ft_rotate_b(t_stack **stack_b)
{
	t_stack	*temp;

	temp = *stack_b;
	ft_stacklast(*stack_b)->next = temp;
	*stack_b = temp->next;
	temp->next = NULL;
	write (1, "rb\n", 3);
}

void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = *stack_a;
	ft_stacklast(*stack_a)->next = temp1;
	*stack_a = temp1->next;
	temp1->next = NULL;
	temp2 = *stack_b;
	ft_stacklast(*stack_b)->next = temp2;
	*stack_b = temp2->next;
	temp2->next = NULL;
	write (1, "rr\n", 3);
}
