/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_large_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:32:47 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 14:25:33 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	ft_set_index(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*current;

	current = *stack_a;
	temp = current;
	while (current)
	{
		temp = *stack_a;
		current->index = 0;
		while (temp)
		{
			if (current->content > temp->content)
				current->index++;
			temp = temp->next;
		}
		current = current->next;
	}
}

int	ft_get_maxbits(int size)
{
	int		max_bits;
	int		max_index;

	max_bits = 0;
	max_index = size - 1;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		i;
	int		j;
	t_stack	*current;
	int		max_bits;

	i = -1;
	max_bits = ft_get_maxbits(size);
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			current = *stack_a;
			if (((current->index >> i) & 1) == 1)
			{
				current = current->next;
				ft_rotate_a(stack_a);
			}
			else
				ft_push_b(stack_a, stack_b);
		}
		while (ft_stacksize(*stack_b) != 0)
			ft_push_a(stack_a, stack_b);
		current = current->next;
	}
}

void	ft_sort_large_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_is_sorted(*stack_a) == TRUE)
		exit(EXIT_FAILURE);
	ft_set_index(stack_a);
	ft_radix_sort(stack_a, stack_b, ft_stacksize(*stack_a));
}
