/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:41:33 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/19 18:13:05 by dde-jesu         ###   ########.fr       */
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

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		i;
	char	*res;

	size = 0;
	i = 0;
	while (++i < argc)
		size += ft_strlen(argv[i]) + 1;
	res = malloc(size * sizeof(char));
	i = 0;
	while (++i < argc)
	{
		while (*argv[i])
			*res++ = *argv[i]++;
		*res++ = '\n';
	}
	*(res - 1) = '\0';
	return (res - size);
}
