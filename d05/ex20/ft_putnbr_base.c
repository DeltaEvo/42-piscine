/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:04:14 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/18 11:43:27 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_uniqstr(char *str)
{
	char *tmp;

	str--;
	while (*(tmp = ++str))
		while (*++tmp)
			if (*tmp == *str)
				return (0);
	return (1);
}

void	ft_putnbr_base_l(int nbr, char *base, int size)
{
	if (-nbr > size)
		ft_putnbr_base_l(nbr / size, base, size);
	ft_putchar(base[-(nbr % size)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	*tmp;

	size = ft_strlen(base);
	tmp = base;
	while (*tmp && !(*tmp == '+' || *tmp == '-'))
		tmp++;
	if (size < 2 || *tmp || !ft_uniqstr(base))
		return ;
	if (nbr < 0)
		ft_putchar('-');
	else
		nbr = -nbr;
	ft_putnbr_base_l(nbr, base, size);
}
