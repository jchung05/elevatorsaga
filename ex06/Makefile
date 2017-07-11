# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 03:48:18 by jchung            #+#    #+#              #
#    Updated: 2017/07/11 09:58:18 by jchung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
SRC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strcmp.c \
	  $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_swap.c
OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCDIR = includes

all: $(NAME) 

$(NAME): $(SRC) 
	$(CC) $(CFLAGS) -I $(INCDIR) -c $^
	ar -rc $(NAME) $(OUT) 
	ranlib $(NAME)

clean: $(OUT)
	rm -f $^

fclean: clean
	rm -f $(NAME) 

re: fclean all
