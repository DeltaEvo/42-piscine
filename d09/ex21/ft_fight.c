/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:48:58 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 16:16:40 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

int		ft_strlen(char *str)
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

void	ft_fight(t_perso *from, t_perso *to, int damage, char *name)
{
	ft_putstr(from->name);
	ft_putstr(" does a ");
	ft_putstr(name);
	ft_putstr(" on ");
	ft_putstr(to->name);
	ft_putstr(".\n");
	to->life -= damage;
	if (to->life <= 0)
	{
		ft_putstr(to->name);
		ft_putstr(" is dead.\n");
	}
}
