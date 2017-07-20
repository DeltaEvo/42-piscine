/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 18:43:47 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 10:02:06 by dde-jesu         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	while (*str)
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str++);
		else
		{
			ft_putchar('\\');
			ft_putchar(hex2char(*str / 16));
			ft_putchar(hex2char(*str++ % 16));
		}
}
