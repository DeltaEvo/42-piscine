/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 18:36:25 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/17 10:58:01 by dde-jesu         ###   ########.fr       */
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
	str -= 1;
	tmp = str;
	while (*++tmp)
		if (!IS_SEPARATOR(*tmp)
				&& (IS_SEPARATOR(*(tmp + 1)) || *(tmp + 1) == '\0'))
			size++;
	tab = malloc(size * (sizeof(char*) + 1));
	tab[size] = 0;
	tmp = str--;
	while (++str == tmp || (*str && *(str + 1)))
		if ((IS_SEPARATOR(*str) || str == tmp) && !IS_SEPARATOR(*(str + 1)))
			*tab++ = ft_str_split_dup(++str);
	return (tab - size);
}
