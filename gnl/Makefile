# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/23 15:33:21 by ldonnis           #+#    #+#              #
#    Updated: 2019/01/08 18:06:57 by ldonnis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = gnl
FLAG = -Wall -Wextra -Werror -ggdb
SRC = main.c get_next_line.c
OBJ = $(SRC:.c=.o)

$(NAME):
	make -C libft/ fclean && make -C libft/
	clang $(FLAG) -I libft/ -c $(SRC)
	clang -o $(NAME) $(OBJ) -I libft/ -L libft/ -lft

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all

%.o: %.c
	$(CC) $(FLAG) -c $< -o $@

.PHONY: all clean fclean re