/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 04:48:48 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 05:05:40 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

# define CLOSE 1
# define OPEN 0

typedef int	t_bool;
# define TRUE 1
# define FLASE 0

struct	s_door
{
	int state;
};

typedef struct s_door	t_door;

t_bool	close_door(t_door *door);
t_bool	open_door(t_door *door);
t_bool	is_door_open(t_door *door);
t_bool	is_door_close(t_door *door);

#endif
