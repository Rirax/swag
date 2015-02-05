# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/02 16:45:04 by rlechapt          #+#    #+#              #
#    Updated: 2015/02/03 12:37:04 by rlechapt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = \
main.c \
check_param.c \
swap.c \
push.c \
rotate.c \
reverse_rotate.c \
algo.c \
error.c \

OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
LIB = -L./libft -lft

all: $(NAME)

$(NAME):
	make -C libft/
	gcc -I libft/includes/ -c $(SRC)
	gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *~

re: fclean all
