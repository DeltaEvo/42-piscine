/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:12:50 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/13 15:34:35 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;

	if (min >= max)
		return ((int)(*range = 0));
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (!*range)
		return (0);
	while (min < max)
		*(*range)++ = min++;
	*range -= len;
	return (len);
}
