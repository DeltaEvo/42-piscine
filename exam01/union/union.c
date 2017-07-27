/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 18:53:38 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 19:29:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_index(char *str, int max, char c)
{
	int i;

	i = -1;
	while (str[++i] && (max != -1 ? i < max : 1))
		if (str[i] == c)
			return (1);
	return (-1);
}

int	main(int argc, char *argv[])
{
	char	*first;
	char	*sec;
	int		i;

	if (argc == 3)
	{
		first = argv[1];
		sec = argv[2];
		i = -1;
		while (first[++i])
			if (ft_index(argv[1], i, first[i]) == -1)
			{
				write(1, first + i, 1);
			}
		i = -1;
		while (sec[++i])
			if (ft_index(argv[1], -1, sec[i]) == -1
				&& ft_index(argv[2], i, sec[i]) == -1)
			{
				write(1, sec + i, 1);
			}
	}
	write(1, "\n", 1);
}
