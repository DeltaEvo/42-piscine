/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:40:33 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 16:52:58 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *node;

	if (av == 0)
		return (0);
	av += ac - 1;
	list = ft_create_elem(*av--);
	node = list;
	while (--ac && (node->next = ft_create_elem(*av--)))
		node = node->next;
	return (list);
}
