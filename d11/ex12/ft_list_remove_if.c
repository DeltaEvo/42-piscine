/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 14:00:36 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/21 14:13:06 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;

	if (begin_list == 0 || *begin_list == 0)
		return ;
	curr = *begin_list;
	prev = 0;
	while (curr)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			if (prev)
				prev->next = curr->next;
			else
				*begin_list = curr->next;
		}
		prev = curr;
		curr = curr->next;
	}
}
