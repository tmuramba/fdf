# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuramba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/30 16:41:51 by tmuramba          #+#    #+#              #
#    Updated: 2018/06/19 00:10:12 by tmuramba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c\
	   ft_memcmp.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memchr.c\
	   ft_strlen.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strcmp.c\
	   ft_strcat.c\
	   ft_strstr.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_strlcat.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strcmp.c\
	   ft_strncmp.c\
	   ft_strdup.c\
	   ft_strnstr.c\
	   ft_atoi.c\
	   ft_memalloc.c\
	   ft_memdel.c\
	   ft_strnew.c\
	   ft_strdel.c\
	   ft_strclr.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_strequ.c\
	   ft_strnequ.c\
	   ft_strsub.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_strsplit.c\
	   ft_itoa.c\
	   ft_putchar.c\
	   ft_putstr.c\
	   ft_putendl.c\
	   ft_putnbr.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_strjoin_2.c\
	   ft_end_of_line.c\

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I. libft.h
	ar rc $(NAME) $(OBJ)
clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
