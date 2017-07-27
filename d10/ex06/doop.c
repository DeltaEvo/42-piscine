/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 11:33:39 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 19:31:32 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define ERR(type) "Stop : " type " by zero\n"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return (0);
}

int		ft_putnbr(int nb)
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
	ft_putchar('\n');
	return (0);
}

int		ft_atoi(char *str)
{
	int mod;
	int res;

	mod = 0;
	res = 0;
	while (*str == ' ' || (*str >= '\a' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		mod = *str++ == '-';
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return (mod ? -res : res);
}

int		main(int argc, char *argv[])
{
	char	op;
	int		res;
	int		nb1;
	int		nb2;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	op = *argv[2];
	res = 0;
	if (nb2 == 0 && (op == '/' || op == '%'))
		return (ft_putstr(op == '%' ? ERR("modulo") : ERR("division")));
	if (op == '*')
		res = nb1 * nb2;
	else if (op == '/')
		res = nb1 / nb2;
	else if (op == '%')
		res = nb1 % nb2;
	else if (op == '+')
		res = nb1 + nb2;
	else if (op == '-')
		res = nb1 - nb2;
	return (ft_putnbr(res));
}
