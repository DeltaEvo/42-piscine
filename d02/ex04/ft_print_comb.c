/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 17:16:06 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/08 15:45:03 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int comb[3];

	comb[0] = '0' - 1;
	while (++comb[0] <= '7')
	{
		comb[1] = comb[0];
		while (++comb[1] <= '8')
		{
			comb[2] = comb[1];
			while (++comb[2] <= '9')
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (!(comb[0] == '7' && comb[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
