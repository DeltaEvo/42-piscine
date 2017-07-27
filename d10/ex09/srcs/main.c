/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:50:36 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 18:52:20 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include "ft_opp.h"
#include "ft.h"

void	ft_usage(int nb1, int nb2)
{
	int n;

	(void)nb1;
	(void)nb2;
	n = -1;
	ft_putstr("error : only [ ");
	while (++n < (int)(sizeof(g_opptab) / sizeof(t_opp)))
	{
		ft_putstr(g_opptab[n].symbol);
		if (ft_strlen(g_opptab[n].symbol) != 0)
			ft_putchar(' ');
	}
	ft_putstr("] are accepted.\n");
}

t_opp	*ft_find(t_opp ops[], int size, char *to_find)
{
	int n;

	n = -1;
	while (++n < size)
		if (ft_strcmp(ops[n].symbol, to_find) == 0)
			return (&ops[n]);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		nbr1;
	int		nbr2;
	t_opp	*op;

	if (argc != 4)
		return (0);
	(void)argv;
	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[3]);
	op = ft_find(g_opptab, (int)(sizeof(g_opptab) / sizeof(t_opp)), argv[2]);
	if (op == 0)
		op = ft_find(g_opptab, (int)(sizeof(g_opptab) / sizeof(t_opp)), "");
	op->func(nbr1, nbr2);
	return (0);
}
