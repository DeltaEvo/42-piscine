/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 11:16:06 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/08 15:09:47 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_repeatchar(char c, int time)
{
	int i;

	i = -1;
	while (++i < time)
		ft_putchar(c);
}

void	sastantua_door(int i, int stage, int doorsize)
{
	ft_repeatchar('|', doorsize - (stage > 3 ? 1 : 0));
	if (stage > 3)
	{
		if (i - 2 - stage % 2 == doorsize / 2)
			ft_putchar('$');
		else
			ft_putchar('|');
	}
	ft_putchar('|');
}

void	sastantua_part(int *size, int maxsize, int stage, int door)
{
	int i;
	int s;
	int doorsize;

	i = -1;
	if (stage)
		*size += (2 + (stage - 1) / 2) * 2;
	while (++i < 3 + stage)
	{
		*size += 2;
		doorsize = stage - stage % 2;
		ft_repeatchar(' ', (maxsize - *size) / 2);
		ft_putchar('/');
		s = *size / 2 - (door && i > stage % 2 + 1 ? doorsize / 2 : 0);
		ft_repeatchar('*', s);
		if (door && (i > stage % 2 + 1))
			sastantua_door(i, stage, doorsize);
		else
			ft_putchar('*');
		ft_repeatchar('*', s);
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	sastantua_size(int *size, int stage)
{
	int i;

	if (stage)
		*size += (2 + (stage - 1) / 2) * 2;
	i = -1;
	while (++i < 3 + stage)
		*size += 2;
}

void	sastantua(int size)
{
	int stage;
	int maxsize;
	int lsize;

	maxsize = -1;
	lsize = -1;
	stage = -1;
	while (++stage < size)
		sastantua_size(&maxsize, stage);
	stage = -1;
	while (++stage < size)
		sastantua_part(&lsize, maxsize, stage, stage == size - 1);
}
