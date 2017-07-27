/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 19:24:07 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 19:52:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		tmp;
	int		i;
	int		mod;
	char	*str;

	tmp = nbr;
	i = 1;
	mod = nbr < 0;
	while (tmp /= 10)
		i++;
	str = malloc((i + 1 + mod) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (mod)
		*str++ = '-';
	str += i - 1;
	*(str + 1) = '\0';
	if (nbr == 0)
		*str-- = '0';
	while (nbr)
	{
		*str-- = (nbr % 10) * (mod ? -1 : 1) + '0';
		nbr /= 10;
	}
	return (str + 1 - mod);
}
