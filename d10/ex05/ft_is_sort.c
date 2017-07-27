/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:05:56 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/22 13:00:55 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int n;
	int order;

	if (length < 2)
		return (1);
	n = 0;
	while (n < length - 1 && f(tab[n], tab[n + 1]) == 0)
		n++;
	if (n == length - 1)
		return (1);
	order = f(tab[n], tab[n + 1]) < 0;
	while (++n < length - 1)
		if (order ? f(tab[n], tab[n + 1]) > 0 : f(tab[n], tab[n + 1]) < 0)
			return (0);
	return (1);
}
