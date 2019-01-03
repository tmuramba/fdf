# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/24 00:37:16 by tmuramba          #+#    #+#              #
#    Updated: 2018/08/10 03:07:57 by tmuramba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
SRC = main.c \
	  get_next_line.c key_hooks.c draw.c get_data.c

LIB	= ./libft/libft.a

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror 


all: $(NAME)

$(NAME): $(OBJ)
	@make -C ./libft/ re
	@$(CC) -g -o $(NAME) $(OBJ) $(FLAGS) -I. $(LIB) -I minilibx_macos -lmlx -framework OpenGL -framework AppKit

 %.o: %.c
	@$(CC) -c -o $@ $(FLAGS) $^

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:	fclean all

