/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:04:57 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 12:51:04 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	while (*s1++ == *s2++ && !(*s1 == '\0' && *s2 == '\0'))
		;
	return (*(s1 - 1) - *(s2 - 1));
}

void	ft_sort(char *tab[], int size)
{
	int		i;
	int		j;
	char	*tmp;

	if (size < 2)
		return ;
	i = size;
	while (--i)
	{
		j = -1;
		while (++j < i)
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
	}
}

int		main(int argc, char *av[])
{
	int i;

	i = 0;
	ft_sort(av + 1, argc - 1);
	while (++i < argc)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
