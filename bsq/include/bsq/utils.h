/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:37:56 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/26 23:38:44 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_UTILS_H
# define FT_BSQ_UTILS_H

# include "error.h"

# ifndef SUCCESS
#  define SUCCESS (0)
# endif

# ifndef FAILURE
#  define FAILURE (1)
# endif

# define UNUSED(x) ((void)(x))
# define MIN(a, b) ((a) < (b) ? (a) : (b))

#endif
