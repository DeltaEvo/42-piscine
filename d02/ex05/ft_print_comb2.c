/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:16:06 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/08 15:45:27 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr2(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int comb[2];

	comb[0] = -1;
	while (++comb[0] <= 98)
	{
		comb[1] = comb[0];
		while (++comb[1] <= 99)
		{
			ft_putnbr2(comb[0]);
			ft_putchar(' ');
			ft_putnbr2(comb[1]);
			if (comb[0] < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
