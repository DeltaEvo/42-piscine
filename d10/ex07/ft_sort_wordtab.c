/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:34:13 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/22 13:13:57 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	while (*s1++ == *s2++ && !(*s1 == '\0' && *s2 == '\0'))
		;
	return (*(s1 - 1) - *(s2 - 1));
}

void	ft_sort_wordtab(char **tab)
{
	char	**start;
	char	**tmp2;
	char	*tmp;

	start = tab;
	while (*tab)
		tab++;
	tab--;
	while (tab > start)
	{
		tmp2 = start - 1;
		while (++tmp2 < tab)
			if (ft_strcmp(*(tmp2 + 1), *tmp2) < 0)
			{
				tmp = *(tmp2 + 1);
				*(tmp2 + 1) = *tmp2;
				*tmp2 = tmp;
			}
		tab--;
	}
}
