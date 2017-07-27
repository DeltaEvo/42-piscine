/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:26:17 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 18:40:24 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include "ft.h"

void	ft_add(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
	ft_putchar('\n');
}

void	ft_sub(int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
	ft_putchar('\n');
}

void	ft_mul(int nb1, int nb2)
{
	ft_putnbr(nb1 * nb2);
	ft_putchar('\n');
}

void	ft_div(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(nb1 / nb2);
	ft_putchar('\n');
}

void	ft_mod(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(nb1 / nb2);
	ft_putchar('\n');
}
