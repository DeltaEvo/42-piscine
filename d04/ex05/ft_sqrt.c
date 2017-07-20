/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:49:09 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/13 11:50:03 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		curr;
	float	tmp;
	int		last;

	if (nb <= 0)
		return (0);
	curr = nb / 2;
	last = -1;
	tmp = curr;
	while (curr != last)
	{
		last = curr;
		tmp = 0.5 * ((float)last + (float)nb / (float)last);
		curr = tmp;
	}
	if (tmp == (float)curr)
		return (curr);
	else
		return (0);
}
