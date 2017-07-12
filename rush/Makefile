# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 03:48:18 by jchung            #+#    #+#              #
#    Updated: 2017/07/11 05:01:28 by jchung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
SRC = $(wildcard $(SRCDIR)/*.c)
OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCDIR = includes

all: compile 

compile: $(SRC) 
	$(CC) $(CFLAGS) -I $(INCDIR) -c $^
	ar -rc $(NAME) $(OUT) 
	ranlib $(NAME)

clean: $(OUT)
	rm -f $^

fclean: clean
	rm -f $(NAME) 

re: fclean all
