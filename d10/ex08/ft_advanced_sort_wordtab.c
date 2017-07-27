/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 12:49:03 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/22 13:12:07 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(*(tmp2 + 1), *tmp2) < 0)
			{
				tmp = *(tmp2 + 1);
				*(tmp2 + 1) = *tmp2;
				*tmp2 = tmp;
			}
		tab--;
	}
}
