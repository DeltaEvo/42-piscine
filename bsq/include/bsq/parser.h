/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:38:04 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/26 23:38:47 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_PARSER_H
# define FT_BSQ_PARSER_H

# include "types.h"
# include "io.h"
# include "ds.h"
# include "compress.h"

extern t_info	*bsq_validate_info(t_info *info);
extern t_info	*bsq_info_ctor(t_info *info, t_reader *reader);
extern int		bsq_read_first(t_reader *reader, t_info *info, t_lbuf **first,
					t_matrix *matrix);

#endif
