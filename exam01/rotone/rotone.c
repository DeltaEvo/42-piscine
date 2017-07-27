/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:25:30 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 18:40:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		main(int ac, char *av[])
{
	int		i;
	char	*tmp;

	i = 0;
	while (++i < ac)
	{
		tmp = av[i];
		while (*tmp)
		{
			if (*tmp >= 'a' && *tmp <= 'z')
				*tmp = (*tmp - 'a' + 1) % 26 + 'a';
			else if (*tmp >= 'A' && *tmp <= 'Z')
				*tmp = (*tmp - 'A' + 1) % 26 + 'A';
			tmp++;
		}
		write(1, av[i], ft_strlen(av[i]));
	}
	write(1, "\n", 1);
}
