/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 13:31:32 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 13:58:51 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_index(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i] && str[i] != to_find)
		i++;
	return (str[i] ? i : -1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int mod;
	int res;
	int size;

	size = ft_strlen(base);
	mod = 0;
	res = 0;
	if (*str == '-' || *str == '+')
		mod = *str++ == '-';
	while (*str && ft_index(base, *str) != -1)
		res = res * size + ft_index(base, *str++);
	if (*str == '-' || *str == '+' || *str == '\0')
		return (mod ? -res : res);
	else
		return (0);
}

char	*ft_putnbr(char *out, int pow, int nb, char *base)
{
	int		size;
	char	*tmp;

	size = ft_strlen(base);
	tmp = out;
	if (nb < 0)
		*out++ = '-';
	while (pow)
	{
		*out++ = base[(nb / pow) * (nb < 0 ? -1 : 1)];
		nb %= pow;
		pow /= size;
	}
	*out = '\0';
	return (tmp);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		pow;
	int		tmp;
	int		size;
	int		i;

	size = ft_strlen(base_to);
	nb = ft_atoi_base(nbr, base_from);
	pow = 1;
	tmp = nb;
	i = 0;
	while (tmp /= size)
	{
		pow *= size;
		i++;
	}
	i += (nb < 0);
	return (ft_putnbr(malloc((i + 1) * sizeof(char)), pow, nb, base_to));
}
