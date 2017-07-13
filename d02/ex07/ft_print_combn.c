/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:16:06 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/08 15:46:43 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb_part(int comb[], int size, int current)
{
	int i;

	while (++comb[current] <= '9' - size + current + 1)
	{
		comb[current + 1] = comb[current];
		if (current == size - 1)
		{
			i = -1;
			while (++i < size)
			{
				ft_putchar(comb[i]);
			}
			if (!(comb[0] == '9' - size + 1 && comb[size - 1] == '9'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		else
		{
			ft_print_comb_part(comb, size, current + 1);
		}
	}
}

void	ft_print_combn(int n)
{
	int comb[n];

	comb[0] = '0' - 1;
	ft_print_comb_part(comb, n, 0);
}
