/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:42:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 11:45:08 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = NULL;
	temp = *stack_b;
	*stack_b = temp->next;
	temp->next = *stack_a;
	*stack_a = temp;
	write (1, "pa\n", 3);
}

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	temp = NULL;
	temp = *stack_a;
	*stack_a = temp->next;
	temp->next = *stack_b;
	*stack_b = temp;
	write (1, "pb\n", 3);
}
