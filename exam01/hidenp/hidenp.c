/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:00:00 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 20:08:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	char *first;
	char *sec;

	if (argc == 3)
	{
		first = argv[1];
		sec = argv[2] - 1;
		while (*++sec && *first)
			if (*first == *sec)
				first++;
		ft_putchar(*first ? '0' : '1');
	}
	write(1, "\n", 1);
}
