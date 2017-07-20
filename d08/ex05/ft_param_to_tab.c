/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:35:03 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 10:37:20 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char		*ft_strdup(char *src)
{
	int		len;
	char	*out;

	len = ft_strlen(src);
	out = malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	while (*src)
		*out++ = *src++;
	*(out + 1) = '\0';
	return (out - len);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			n;
	t_stock_par	*tab;

	n = -1;
	tab = malloc((ac + 1) * sizeof(t_stock_par));
	while (++n < ac)
	{
		tab[n].size_param = ft_strlen(av[n]);
		tab[n].str = av[n];
		tab[n].copy = ft_strdup(av[n]);
		tab[n].tab = ft_split_whitespaces(av[n]);
	}
	tab[n].str = 0;
	return (tab);
}
