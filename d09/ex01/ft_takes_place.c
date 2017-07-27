/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:45:44 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 16:00:47 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define FORMAT(h) ((h) ? (h) % 13 + (h) / 13 : 12)
#define SUFFIX(h) ((!(h) || (h) < 12) ? "A.M." : "P.M.")

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int nbr)
{
	ft_putchar(nbr / 10 + '0');
	ft_putchar(nbr % 10 + '0');
}

void	ft_takes_place(int from)
{
	int to;

	from %= 24;
	to = (from + 1) % 24;
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_putnbr2(FORMAT(from));
	ft_putstr(".00 ");
	ft_putstr(SUFFIX(from));
	ft_putstr(" AND ");
	ft_putnbr2(FORMAT(to));
	ft_putstr(".00 ");
	ft_putstr(SUFFIX(to));
	ft_putchar('\n');
}
