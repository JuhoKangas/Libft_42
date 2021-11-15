# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 13:55:41 by jkangas           #+#    #+#              #
#    Updated: 2021/11/15 20:10:41 by jkangas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = gcc -Wall -Wextra -Werror
INCLUDES = libft.h
FUNC = ft_putchar \
		ft_putstr \
		ft_putnbr \
		ft_putendl \
		ft_strlen \
		ft_strdup \
		ft_strcmp \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_memccpy \
		ft_memcpy \
		ft_memset \
		ft_bzero \
		ft_tolower \
		ft_toupper

SRCS = $(addsuffix .c, $(FUNC))
OBJ = $(addsuffix .o, $(FUNC))

all: $(NAME)

$(NAME):
	$(GCC) -c $(SRCS) -I$(INCLUDES)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
