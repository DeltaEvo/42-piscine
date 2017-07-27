/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 19:32:42 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:47:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	nb = nb > 0 ? -nb : nb;
	if (nb)
	{
		ft_putnbr(nb / 10);
		ft_putchar(-(nb % 10) + '0');
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
	int nb;
	int res;
	int i;

	if (argc > 1)
	{
		nb = ft_atoi(argv[1]);
		i = 0;
		while (++i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(i * nb);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
