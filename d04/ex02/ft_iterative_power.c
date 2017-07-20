/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:33:21 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/12 16:35:27 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = -1;
	r = 1;
	while (++i < power)
		r *= nb;
	return (r);
}
