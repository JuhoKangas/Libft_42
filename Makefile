# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 13:55:41 by jkangas           #+#    #+#              #
#    Updated: 2021/11/29 18:17:14 by jkangas          ###   ########.fr        #
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
		ft_strncmp \
		ft_strcpy \
		ft_strncpy \
		ft_strclr \
		ft_strstr \
		ft_strnew \
		ft_strequ \
		ft_strnequ \
		ft_strnstr \
		ft_strequ \
		ft_strchr \
		ft_strrchr \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_atoi \
		ft_isalnum \
		ft_isalpha \
		ft_isascii \
		ft_isdigit \
		ft_isprint \
		ft_isspace \
		ft_memccpy \
		ft_memcpy \
		ft_memcmp \
		ft_memset \
		ft_memchr \
		ft_memdel \
		ft_memalloc \
		ft_memmove \
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
