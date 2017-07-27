/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 23:37:28 by dde-jesu          #+#    #+#             */
/*   Updated: 2017/07/26 23:38:36 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq/types.h"
#include "bsq/error.h"

inline unsigned int	bsq_exit(char *msg, int size)
{
	UNUSED(size = (signed)write(1, msg, (size_t)size));
	exit(1);
	return (0);
}
