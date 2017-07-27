/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:36:25 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/21 12:15:42 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define IS_SEPARATOR(c) ((c) == ' ' || (c) == '\t' || (c) == '\n')

char	*ft_str_split_dup(char *str)
{
	int		n;
	char	*tmp;

	n = 0;
	while (str[n] && !IS_SEPARATOR(str[n]))
		n++;
	tmp = malloc(sizeof(char) * (n + 1));
	while (*str && !IS_SEPARATOR(*str))
		*tmp++ = *str++;
	*tmp = '\0';
	return (tmp - n);
}

char	**ft_split_whitespaces(char *str)
{
	int		size;
	char	**tab;
	char	*tmp;

	size = 0;
	tmp = str;
	while (*++tmp)
		if (!IS_SEPARATOR(*(tmp - 1))
				&& (IS_SEPARATOR(*tmp)))
			size++;
	if (!IS_SEPARATOR(*(tmp - 1)))
		size++;
	tab = malloc((size + 1) * sizeof(char*));
	tab[size] = 0;
	if (!IS_SEPARATOR(*str))
		*tab++ = ft_str_split_dup(str);
	while (*++str && *(str + 1))
		if (IS_SEPARATOR(*str) && !IS_SEPARATOR(*(str + 1)))
			*tab++ = ft_str_split_dup(++str);
	return (tab - size);
}
