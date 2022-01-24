/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:58:09 by dvallien          #+#    #+#             */
/*   Updated: 2021/11/10 11:00:54 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	allsize;

	i = 0;
	allsize = size * count;
	ptr = malloc(allsize);
	if (!ptr)
		return (0);
	ft_bzero((void *)ptr, allsize);
	return ((void *)ptr);
}
