# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 13:55:41 by jkangas           #+#    #+#              #
#    Updated: 2021/11/03 14:02:50 by jkangas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_putchar \
	   ft_putstr \
	   ft_strlen \

all: $(NAME)

clean:

fclean: clean

re: fclean all
