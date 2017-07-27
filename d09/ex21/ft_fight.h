/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:03:42 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 16:23:32 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

# include <unistd.h>
# include "ft_perso.h"

# define KICK 15, "judo kick"
# define PUNCH 5, "judo punch"
# define HEADBUTT 20, "judo headbutt"
# define KICK1 13, "un judo chop ichi"
# define KICK2 3, "un judo chop ni"
# define KICK3 18, "un judo chop san"
# define KICK4 9, "un judo chop shi"
# define KICK5 11, "un judo chop go"
# define KICK6 13, "un judo chop roku"
# define KICK7 8, "un judo chop shichi"
# define KICK8 6, "un judo chop hachi"
# define KICK9 11, "un judo chop ku"
# define KICK10 9, "un judo chop ju"
# define KICK11 18, "un judo chop hyaku"

void	ft_fight(t_perso *from, t_perso *to, int damage, char *name);

#endif
