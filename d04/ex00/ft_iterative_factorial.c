/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:13:35 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/12 15:39:02 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int r;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	r = nb;
	while (++i < nb)
		r *= i;
	return (r);
}
