/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:01:49 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/14 13:28:59 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_join(char **tab, char *sep)
{
	char	**tmp;
	char	*out;
	int		len;
	int		n;

	tmp = tab;
	len = 0;
	while (*tmp)
		len += ft_strlen(*tmp++);
	len += (tmp - 1 - tab) * ft_strlen(sep);
	out = malloc((len + 1) * sizeof(char));
	tab--;
	while (*++tab)
	{
		while (**tab)
			*out++ = *(*tab)++;
		n = -1;
		if (*(tab + 1))
			while (sep[++n])
				*out++ = sep[n];
	}
	*out = '\0';
	return (out - len);
}
