/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 10:19:25 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/21 12:05:37 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		list_size(t_list *begin_list)
{
	int i;

	if (begin_list == 0)
		return (0);
	i = 1;
	while ((begin_list = begin_list->next))
		i++;
	return (i);
}

t_list	*list_at(t_list *begin_list, unsigned int nbr)
{
	if (nbr == 0)
		return (begin_list);
	while (--nbr && begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (nbr ? 0 : begin_list->next);
}

void	ft_list_reverse(t_list **begin)
{
	int		size;
	t_list	*start;

	size = list_size(*begin);
	start = list_at(*begin, size - 1);
	while (--size >= 0)
		list_at(*begin, size)->next = size == 0 ? 0 : list_at(*begin, size - 1);
	*begin = start;
}
