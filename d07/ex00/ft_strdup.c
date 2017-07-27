/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:01:43 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 21:11:49 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		f_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*out;

	if (src == 0)
		return (0);
	len = f_strlen(src);
	out = malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	while (*src)
		*out++ = *src++;
	*out = '\0';
	return (out - len);
}
