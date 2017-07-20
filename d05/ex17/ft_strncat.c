/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:21:16 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/11 14:28:20 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*tmp;

	tmp = dest;
	while (*tmp)
		tmp++;
	while (*src && nb--)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
