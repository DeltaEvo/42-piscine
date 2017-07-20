/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:00:47 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/12 18:33:04 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int board[8], int x, int y)
{
	int inc_y;
	int inc_x;
	int row;
	int line;

	inc_y = -1;
	while (inc_y <= 1)
	{
		inc_x = -1;
		while (inc_x <= 1)
		{
			row = x;
			line = y;
			while (row >= 0 && row < 8 && line >= 0 && line < 8)
			{
				if (board[row] == line)
					return (0);
				line += inc_y;
				row += inc_x;
			}
			inc_x += 2;
		}
		inc_y++;
	}
	return (1);
}

int	ft_eight_queens_backtrack(int board[8], int row)
{
	int total;
	int line;

	total = 0;
	line = -1;
	while (++line < 8)
		if (is_valid(board, row, line))
		{
			if (row == 7)
				total++;
			else
			{
				board[row] = line;
				total += ft_eight_queens_backtrack(board, row + 1);
				board[row] = -1;
			}
		}
	return (total);
}

int	ft_eight_queens_puzzle(void)
{
	int board[8];
	int i;

	i = -1;
	while (++i < 8)
		board[i] = -1;
	return (ft_eight_queens_backtrack(board, 0));
}
