/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:27:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/12 12:00:41 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_stack	*ft_create_list(t_stack *stack_a, char **args)
{
	int		i;
	t_stack	*new_node;

	i = -1;
	while (args[++i])
	{
		new_node = ft_stacknew(ft_atoi(args[i]));
		if (!new_node)
		{
			ft_stackclear(&new_node, free);
			exit(EXIT_FAILURE);
		}
		ft_stackadd_back(&stack_a, new_node);
	}
	return (stack_a);
}

int	ft_check_errors(char **av)
{
	int	i;
	int	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
				|| ((av[i][j] == '-') && (j != 0))
				|| ((av[i][j] == '-') && (av[i][1] == '\0')))
				return (1);
		}
		j = 0;
		while (av[i + (++j)])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[i + j]))
				return (1);
		}
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			return (1);
	}
	return (0);
}

char	**ft_get_args(int ac, char **av)
{
	char	**args;

	args = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = &av[1];
	return (args);
}

void	ft_argsclear(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

int	main(int ac, char **av)
{
	char	**args;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	args = ft_get_args(ac, av);
	if (ft_check_errors(args) == 1)
	{
		write (1, "Error\n", 7);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_a = ft_create_list(stack_a, args);
		if (ft_stacksize(stack_a) <= 5)
			ft_sort_small_stack(&stack_a, &stack_b);
		else
			ft_sort_large_stack(&stack_a, &stack_b);
	}
	if (ac == 2)
		ft_argsclear(args);
	ft_stackclear(&stack_a, free);
	return (0);
}
