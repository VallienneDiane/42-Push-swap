/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:32:28 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 15:38:46 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	ft_is_sorted(t_stack *stack)
{
	t_stack	*head;

	head = stack;
	while (head && head->next)
	{
		if (head->content > head->next->content)
			return (FALSE);
		head = head->next;
	}
	return (TRUE);
}

void	ft_sort_three(t_stack **stack_a)
{
	t_stack	*head;

	head = *stack_a;
	while (head && (ft_is_sorted(*stack_a) == FALSE))
	{
		head = *stack_a;
		if (head->content > head->next->content)
			ft_swap_a(stack_a);
		else if (head->next->content > head->next->next->content)
			ft_reverse_a(stack_a);
	}
}

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int	distance;

	distance = ft_get_distance(*stack_a, ft_get_min(*stack_a));
	if (distance == 1)
		ft_rotate_a(stack_a);
	else if (distance == 2)
	{
		ft_reverse_a(stack_a);
		ft_reverse_a(stack_a);
	}
	else if (distance == 3)
		ft_reverse_a(stack_a);
	ft_push_b(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_push_a(stack_a, stack_b);
}

void	ft_sort_small_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_stacksize(*stack_a);
	if (ft_is_sorted(*stack_a) == TRUE || size == 0 || size == 1)
		return ;
	if (size == 2)
		ft_swap_a(stack_a);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size == 5)
		ft_sort_five(stack_a, stack_b);
}
