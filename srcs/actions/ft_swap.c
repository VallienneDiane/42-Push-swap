/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 12:17:44 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 12:07:34 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_swap_a(t_stack **stack_a)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = NULL;
	temp2 = NULL;
	if (ft_stacksize(*stack_a) > 1)
	{
		temp1 = *stack_a;
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		temp2->next = temp1;
		*stack_a = temp2;
		write (1, "sa\n", 3);
	}
}

void	ft_swap_b(t_stack **stack_b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = NULL;
	temp2 = NULL;
	if (ft_stacksize(*stack_b) > 1)
	{
		temp1 = *stack_b;
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		temp2->next = temp1;
		*stack_b = temp2;
		write (1, "sb\n", 3);
	}
}

void	ft_swap_both(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = NULL;
	temp2 = NULL;
	if (ft_stacksize(*stack_a) > 1)
	{
		temp1 = *stack_a;
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		temp2->next = temp1;
		*stack_a = temp2;
	}
	temp1 = NULL;
	temp2 = NULL;
	if (ft_stacksize(*stack_b) > 1)
	{
		temp1 = *stack_b;
		temp2 = temp1->next;
		temp1->next = temp1->next->next;
		temp2->next = temp1;
		*stack_b = temp2;
	}
	write (1, "ss\n", 3);
}
