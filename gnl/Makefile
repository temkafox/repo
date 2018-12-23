# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldonnis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/23 15:33:21 by ldonnis           #+#    #+#              #
#    Updated: 2018/12/23 15:41:36 by ldonnis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = gnl
FLAG = -Wall -Wextra -Werror
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