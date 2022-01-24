/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbeforelast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 14:49:31 by dvallien          #+#    #+#             */
/*   Updated: 2022/01/03 16:14:53 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstbeforelast(t_list *list)
{
	t_list	*temp;
	t_list	*before;

	temp = list;
	before = list;
	while (temp->next)
	{
		before = temp;
		temp = temp->next;
	}
	return (before);
}
