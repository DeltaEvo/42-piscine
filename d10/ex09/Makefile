# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 15:40:43 by dde-jesu          #+#    #+#              #
#    Updated: 2017/07/21 14:26:17 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CCFLAGS=-Wall -Werror -Wextra -Iincludes -I.
SRCS = srcs/doop.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/main.c
HEADERS = includes/doop.h includes/ft.h ft_opp.h
NAME = ft_advanced_do-op

all: $(NAME)

debug: CCFLAGS += -g
debug: $(NAME)

ft_advanced_do-op: $(HEADERS) $(SRCS)
	$(CC) $(CCFLAGS) $(DCFLAGS) $(SRCS) -o $(NAME)
clean:
fclean: clean
	rm -rf ft_advanced_do-op*
re: fclean $(NAME)

