/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 10:58:54 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 11:02:16 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *res;
	int n;

	res = malloc(length * sizeof(int));
	n = -1;
	while (++n < length)
		res[n] = f(tab[n]);
	return (res);
}
