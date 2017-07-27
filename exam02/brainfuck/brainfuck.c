/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 19:56:54 by exam              #+#    #+#             */
/*   Updated: 2017/07/21 20:23:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program;
	char	stack[2048];
	int		ptr;
	int		c;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	program = argv[1] - 1;
	ptr = -1;
	while (++ptr < 2048)
		stack[ptr] = 0;
	ptr = 0;
	while (*++program)
		if (*program == '>' || *program == '<')
			ptr += *program == '<' ? -1 : 1;
		else if (*program == '+' || *program == '-')
			stack[ptr] += *program == '-' ? -1 : 1;
		else if (*program == '.')
			write(1, (stack + ptr), 1);
		else if (*program == '[' && stack[ptr] == 0)
		{
			c = 0;
			while (*++program != ']' || c != 0)
				if (*program == '[')
					c++;
				else if (*program == ']')
					c--;
			program--;
		}
		else if (*program == ']' && stack[ptr] != 0)
		{
			c = 0;
			while (*--program != '[' || c != 0)
				if (*program == ']')
					c++;
				else if (*program == '[')
					c--;
			program--;
		}
	return (0);
}
