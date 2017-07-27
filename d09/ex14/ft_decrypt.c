/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:55:19 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 15:52:13 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int mod;
	int res;

	mod = 0;
	res = 0;
	while (*str == ' ' || (*str >= '\a' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		mod = *str++ == '-';
	while (*str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - '0');
	return (mod ? -res : res);
}

char	*ft_read(char **str, char sep)
{
	int		i;
	char	*tmp;

	i = 0;
	while ((*str)[i] != sep && (*str)[i])
		i++;
	tmp = malloc(i * sizeof(char) + 1);
	while (**str != sep && **str)
		*tmp++ = *(*str)++;
	*tmp = '\0';
	return (tmp - i);
}

t_perso	**ft_decrypt(char *str)
{
	char	*tmp;
	t_perso	**out;
	int		i;

	i = 1;
	tmp = str;
	while (*tmp)
		if (*tmp++ == ';')
			i++;
	out = (t_perso **)malloc((i + 1) * sizeof(t_perso*));
	i = 0;
	while (*str)
	{
		out[i] = malloc(sizeof(t_perso));
		out[i]->age = ft_atoi(ft_read(&str, '|'));
		str++;
		out[i++]->name = ft_read(&str, ';');
		if (*str)
			str++;
	}
	out[i] = 0;
	return (out);
}
