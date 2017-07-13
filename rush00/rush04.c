/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssavelie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:13:28 by ssavelie          #+#    #+#             */
/*   Updated: 2017/07/08 16:46:28 by ssavelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int width, char a, char b, char c)
{
	int i;

	i = 1;
	ft_putchar(a);
	while (++i < width)
		ft_putchar(b);
	if (width >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int i;

	i = 1;
	if (width > 0 && height > 0)
	{
		draw_line(width, 'A', 'B', 'C');
		while (++i < height)
			draw_line(width, 'B', ' ', 'B');
		if (height >= 2)
			draw_line(width, 'C', 'B', 'A');
	}
}
