/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 20:11:08 by exam              #+#    #+#             */
/*   Updated: 2017/07/14 20:49:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


void	skip_whitespaces(char **src)
{

	while (**src == ' ' || **src == '\t')
		(*src)++;
}

char	 **ft_split(char *src)
{
	char	*tmp;
	int 	len;
	int		n;
	int 	i;
	char 	**out;

	skip_whitespaces(&src);
	len = 1;
	tmp = src;
	while (*tmp)
		if (*tmp == ' ' || *tmp == '\t') {
			skip_whitespaces(&tmp);
			len++;
		} else
			tmp++;
	out = malloc((len + 1) * sizeof(char*));
	n = 0;
	while (1)
	{
		if (src[n] == '\0' || src[n] == ' ' || src[n] == '\t') {
			*out = malloc((n + 1) * sizeof(char));
			i = -1;
			while (++i < n)
				(*out)[i] = src[i];
			(*out++)[i] = '\0';
			if (src[n] == '\0')
				break;
			src += n;
			n = 0;
			skip_whitespaces(&src);
		} else
			n++;
	}
	*out = 0;
	return (out - len + 1);
}
