/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:58:14 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 10:07:15 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	hex2char(int nb)
{
	if (nb < 10)
		return (nb + '0');
	else
		return (nb - 10 + 'a');
}

void	ft_putnbr_hex(int nb, int deep)
{
	if (deep > 1)
		ft_putnbr_hex(nb / 16, deep - 1);
	ft_putchar(hex2char(nb % 16));
}

void	ft_print_memory_values(char *adr, unsigned int from, unsigned int size)
{
	unsigned int j;

	j = from - 1;
	while (++j < from + 16 && j < size)
	{
		if (j % 2 == 0)
			ft_putchar(' ');
		ft_putnbr_hex(adr[j], 2);
	}
	while (j++ < from + 16)
	{
		if (j % 2 == 0)
			ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			*adr;

	adr = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_putnbr_hex(i, 8);
		ft_putchar(':');
		ft_print_memory_values(adr, i, size);
		ft_putchar(' ');
		j = i - 1;
		while (++j < i + 16 && j < size)
			ft_putchar((adr[j] >= 0 && adr[j] <= 31) ? '.' : adr[j]);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
