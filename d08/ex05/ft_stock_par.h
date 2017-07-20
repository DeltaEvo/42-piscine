/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:33:16 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/20 12:53:41 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
};
typedef struct s_stock_par	t_stock_par;

#endif

#ifndef FT_SPLIT_WHITESPACE
# define FT_SPLIT_WHITESPACE

char		**ft_split_whitespaces(char *str);
#endif
