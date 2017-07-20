/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:47:35 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 09:59:58 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	while (*src && i < size - 1)
		dest[i++] = *src++;
	if (i < size)
		dest[i] = '\0';
	while (*src++)
		i++;
	return (i);
}
