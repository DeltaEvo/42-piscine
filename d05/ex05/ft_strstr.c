/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 18:00:31 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/17 18:32:02 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *tmp;

	if (!*to_find)
		return (str);
	tmp = to_find;
	while (*str && *tmp)
		if (*str++ != *tmp++)
		{
			if (to_find != tmp - 1)
				str -= (tmp - to_find - 1);
			tmp = to_find;
		}
	return (*tmp ? 0 : str - (tmp - to_find));
}
