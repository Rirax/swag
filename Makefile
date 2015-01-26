# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlechapt <rlechapt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/23 03:45:03 by rlechapt          #+#    #+#              #
#    Updated: 2015/01/26 02:54:28 by rlechapt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = \
main.c \
swap.c \
push.c \
rotate.c \
reverse_rotate.c \
algo.c

EXT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C ./libft
		gcc -o $(NAME) $(SRC) -L libft -lft

clean:
		make clean -C ./libft
		rm -f $(EXT)

fclean: clean
		make fclean -C ./libft
		rm -f $(NAME)

re: fclean all
