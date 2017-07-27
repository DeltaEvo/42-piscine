/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:36:27 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 02:04:38 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_equal(char *str, char *to_find)
{
	while (*str && *to_find && (*str++ | 0x20) == (*to_find++ | 0x20))
		;
	return (*str == ' ' || !*str) && !*to_find;
}

int	main(int ac, char *av[])
{
	int i;

	i = 0;
	while (++i < ac)
	{
		while (*av[i] == ' ')
			av[i]++;
		if (ft_equal(av[i], "president") || ft_equal(av[i], "attack")
				|| ft_equal(av[i], "powers"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
	}
	return (0);
}
