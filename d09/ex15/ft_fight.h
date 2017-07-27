/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:03:42 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 16:16:59 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

# include <unistd.h>
# include "ft_perso.h"

# define KICK 15, "judo kick"
# define PUNCH 5, "judo punch"
# define HEADBUTT 20, "judo headbutt"

void	ft_fight(t_perso *from, t_perso *to, int damage, char *name);

#endif
