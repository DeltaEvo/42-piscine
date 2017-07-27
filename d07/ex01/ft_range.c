/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:03:53 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/13 15:11:15 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int len;

	if (min >= max)
		return (0);
	len = max - min;
	tab = malloc(len * sizeof(int));
	if (!tab)
		return (0);
	while (min < max)
		*tab++ = min++;
	return (tab - len);
}
