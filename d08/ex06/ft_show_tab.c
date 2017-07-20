/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:52:46 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 12:55:15 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	int pow;
	int mod;
	int tmp;

	pow = 1;
	tmp = nb;
	while (tmp /= 10)
	{
		pow *= 10;
	}
	mod = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		mod = -1;
	}
	while (pow)
	{
		ft_putchar(nb / pow * mod + '0');
		nb %= pow;
		pow /= 10;
	}
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
}

void	ft_show_tab(t_stock_par *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
