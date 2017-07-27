/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:52:14 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:55:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(int nb)
{
	nb = nb > 0 ? -nb : nb;
	if (nb)
	{
		ft_putnbr_hex(nb / 16);
		nb = -(nb % 16);
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int		ft_atoi(char *src)
{
	int mod;
	int nb;

	while (*src == ' ' || (*src >= '\a' && *src <= '\t'))
		src++;
	mod = 0;
	nb = 0;
	if (*src == '+' || *src == '-')
		mod = *src++ == '-';
	while (*src >= '0' && *src <= '9')
		nb = nb * 10 + (*src++ - '0');
	return (mod ? -nb : -nb);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putnbr_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
