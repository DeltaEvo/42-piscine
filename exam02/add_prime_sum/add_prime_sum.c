/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 18:39:04 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 19:20:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int mod;
	int nb;

	while (*str == ' ' || (*str >= '\a' && *str <= '\r'))
		str++;
	mod = 0;
	nb = 0;
	if (*str == '-' || *str == '+')
		mod = *str++ == '-';
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + *str++ - '0';
	return (mod ? -nb : nb);
}

void	ft_putnbr(int i)
{
	char c;

	if (i / 10)
		ft_putnbr(i / 10);
	c = (i % 10) + '0';
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int nb;
	int res;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	if (nb < 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	res = is_prime(nb) ? nb : 0;
	while (--nb)
		if (is_prime(nb))
			res += nb;
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
