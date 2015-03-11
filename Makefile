# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/02 16:45:04 by rlechapt          #+#    #+#              #
#    Updated: 2015/03/11 06:08:45 by rlechapt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = \
main.c \
ft_atoi.c \
ft_itoa.c \
ft_putchar.c \
ft_putnbr.c \
ft_strequ.c \
ft_memalloc.c \
ft_putstr.c \
check_param.c \
swap.c \
push.c \
rotate.c \
reverse_rotate.c \
sort_algo.c \
error.c \
tricks.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRC)
	cc $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
