/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:41:54 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 11:10:03 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;
	int j;

	if (length <= 0)
		return (0);
	i = -1;
	while (++i < length)
	{
		if (!tab[i])
		{
			j = i - 1;
			while (++j < length - 1)
				tab[j] = tab[j + 1];
			i--;
			length--;
		}
	}
	return (length);
}
