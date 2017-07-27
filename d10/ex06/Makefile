# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-jesu <dde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/18 15:40:43 by dde-jesu          #+#    #+#              #
#    Updated: 2017/07/21 14:21:23 by dde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CCFLAGS=-Wall -Werror -Wextra -I.
SRCS = doop.c
NAME = do-op

all: $(NAME)

debug: CCFLAGS += -g
debug: $(NAME)

$(NAME): *.c 
	$(CC) $(CCFLAGS) $(DCFLAGS) $(SRCS) -o $(NAME)
clean:
fclean: clean
	rm -rf do-op*
re: fclean do-op

