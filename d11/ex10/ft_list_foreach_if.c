/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 12:32:40 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/21 12:36:11 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *b, void (*f)(void *), void *d, int (*cmp)())
{
	if (b == 0)
		return ;
	if (cmp(b->data, d) == 0)
		f(b->data);
	while (b->next)
		if (cmp((b = b->next)->data, d) == 0)
			f(b->data);
}
