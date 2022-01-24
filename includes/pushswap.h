/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:55:55 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/11 15:30:06 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# define TRUE 1
# define FALSE 0

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			content;
	int				index;
	struct s_stack	*next;
}					t_stack;

/* ========== INPUT PARSING ========== */
int			ft_check_errors(char **av);
char		**ft_get_args(int ac, char **args);
t_stack		*ft_create_list(t_stack *stack_a, char **av);

/* ========== CHAIN LIST OPERATIONS ========== */
void		ft_swap_a(t_stack **stack_a);
void		ft_swap_b(t_stack **stack_b);
void		ft_swap_both(t_stack **stack_a, t_stack **stack_b);
void		ft_push_a(t_stack **stack_a, t_stack **stack_b);
void		ft_push_b(t_stack **stack_a, t_stack **stack_b);
void		ft_rotate_a(t_stack **stack);
void		ft_rotate_b(t_stack **stack_b);
void		ft_rotate_both(t_stack **stack_a, t_stack **stack_b);
void		ft_reverse_a(t_stack **stack_a);
void		ft_reverse_b(t_stack **stack_b);
void		ft_reverse_both(t_stack **stack_a, t_stack **stack_b);

/* ========== STACK OPERATIONS ========== */
int			ft_stacksize(t_stack *lst);
t_stack		*ft_stacklast(t_stack *list);
t_stack		*ft_stacknew(long node_content);
t_stack		*ft_stackbeforelast(t_stack *list);
void		ft_stackclear(t_stack **lst, void (*del)(void *));
void		ft_stackadd_back(t_stack **list, t_stack *new_node);

/* ========== SORTING ACTIONS ========== */
void		ft_sort_small_stack(t_stack **stack_a, t_stack **stack_b);
void		ft_sort_large_stack(t_stack **stack_a, t_stack **stack_b);
void		ft_set_index(t_stack **stack);
int			ft_is_sorted(t_stack *stack);
void		ft_radix_sort(t_stack **stack_a, t_stack **stack_b, int size);
int			ft_get_min(t_stack *stack_a);
int			ft_get_distance(t_stack *stack, int min);
int			ft_get_maxbits(int size);
void		ft_sort_three(t_stack **stack_a);
void		ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void		ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void		ft_argsclear(char **args);

#endif