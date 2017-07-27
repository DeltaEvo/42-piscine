/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:38:02 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/21 12:40:23 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == 0)
		return (0);
	if (cmp(begin_list->data, data_ref) == 0)
		return (begin_list);
	while (begin_list->next)
		if (cmp((begin_list = begin_list->next)->data, data_ref) == 0)
			return (begin_list);
	return (0);
}
