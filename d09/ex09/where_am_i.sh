#!/usr/bin/env sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/14 02:29:21 by dde-jesu          #+#    #+#              #
#    Updated: 2017/07/14 02:29:21 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IPS=$( ifconfig | grep -o "\tinet [^ ]*" | cut -c 7- | grep -v 127.0.0.1 )

if [ -z "$IPS" ]; then
	echo "Je suis perdu !"
else
	echo "$IPS"
fi
