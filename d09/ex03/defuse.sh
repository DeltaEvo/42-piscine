#!/usr/bin/env sh

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:51:03 by dde-jesu          #+#    #+#              #
#    Updated: 2017/07/13 19:51:03 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DATE=$( stat -f '%a-1' bomb.txt | bc )
CONVERTED=$( date -r $DATE "+%Y%m%d%H%M.%S" )
touch -at $CONVERTED bomb.txt
echo $DATE
