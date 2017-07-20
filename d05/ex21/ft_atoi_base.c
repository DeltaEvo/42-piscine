/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:54:07 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 11:47:50 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i] && str[i] != to_find)
		i++;
	return (str[i] ? i : -1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_uniqstr(char *str)
{
	char *tmp;

	str--;
	while (*(tmp = ++str))
		while (*++tmp)
			if (*tmp == *str)
				return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int mod;
	int res;
	int size;

	mod = 0;
	res = 0;
	size = ft_strlen(base);
	if (size < 2 || !ft_uniqstr(base) || ft_index(base, '-') != -1
			|| ft_index(base, '+') != -1)
		return (0);
	if (*str == '-' || *str == '+')
		mod = *str++ == '-';
	while (*str && ft_index(base, *str) != -1)
		res = res * size + ft_index(base, *str++);
	return (mod ? -res : res);
}
