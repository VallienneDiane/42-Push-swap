/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:00:15 by user42            #+#    #+#             */
/*   Updated: 2022/01/11 15:29:44 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_get_min(t_stack *stack_a)
{
	t_stack	*head;
	int		min;

	head = stack_a;
	min = head->content;
	while (head->next)
	{
		if (head->content < min)
			min = head->content;
		head = head->next;
	}
	if (head->content < min)
		min = head->content;
	return (min);
}

int	ft_get_distance(t_stack *stack, int min)
{
	int		distance;
	t_stack	*head;

	distance = 0;
	head = stack;
	while (stack)
	{
		if (head->content == min)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	distance;

	distance = ft_get_distance(*stack_a, ft_get_min(*stack_a));
	if (distance == 1)
		ft_rotate_a(stack_a);
	else if (distance == 2)
	{
		ft_rotate_a(stack_a);
		ft_rotate_a(stack_a);
	}
	else if (distance == 3)
	{
		ft_reverse_a(stack_a);
		ft_reverse_a(stack_a);
	}
	else if (distance == 4)
		ft_reverse_a(stack_a);
	ft_push_b(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}
