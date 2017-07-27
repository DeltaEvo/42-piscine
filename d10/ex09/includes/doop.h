/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:27:28 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 18:52:04 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

typedef	struct	s_opp
{
	char *symbol;
	void (*func)(int nb1, int nb2);
}				t_opp;

void			ft_add(int nb1, int nb2);
void			ft_sub(int nb1, int nb2);
void			ft_mul(int nb1, int nb2);
void			ft_div(int nb1, int nb2);
void			ft_mod(int nb1, int nb2);
void			ft_usage(int nb1, int nb2);
#endif
