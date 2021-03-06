/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:07:49 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/07 18:31:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	tests = 0;
	int passed = 0;

	passed += test_strlen();
	tests++;
	passed += test_strdup();
	tests++;
	passed += test_strcpy();
	tests++;
	passed += test_strncpy();
	tests++;
	passed += test_strcmp();
	tests++;
	passed += test_strncmp();
	tests++;
	passed += test_strstr();
	tests++;
	passed += test_strsub();
	tests++;
	passed += test_strtrim();
	tests++;
	passed += test_strsplit();
	tests++;
	passed += test_strclr();
	tests++;
	passed += test_strdel();
	tests++;
	passed += test_strmap();
	tests++;
	passed += test_strmapi();
	tests++;
	passed += test_strcat();
	tests++;
	passed += test_strncat();
	tests++;
	passed += test_strlcat();
	tests++;
	passed += test_strnew();
	tests++;
	passed += test_strjoin();
	tests++;
	passed += test_striter();
	tests++;
	passed += test_striteri();
	tests++;
	passed += test_strequ();
	tests++;
	passed += test_strnequ();
	tests++;
	passed += test_strchr();
	tests++;
	passed += test_strrchr();
	tests++;
	passed += test_strnstr();
	tests++;
	passed += test_atoi();
	tests++;
	passed += test_itoa();
	tests++;
	passed += test_isalnum();
	tests++;
	passed += test_isalpha();
	tests++;
	passed += test_isascii();
	tests++;
	passed += test_isdigit();
	tests++;
	passed += test_isprint();
	tests++;
	passed += test_toupper();
	tests++;
	passed += test_tolower();
	tests++;
	passed += test_memset();
	tests++;
	passed += test_bzero();
	tests++;
	passed += test_memcpy();
	tests++;
	passed += test_memcmp();
	tests++;
	passed += test_memalloc();
	tests++;
	passed += test_memccpy();
	tests++;
	passed += test_memchr();
	tests++;
	passed += test_memmove();
	tests++;
	passed += test_memdel();
	tests++;
	passed += test_lstnew();
	tests++;
	passed += test_lstdelone();
	tests++;

	printf("\nTests ran: \t\t\t%i\nTests passed: \t\t\t%i\n", tests, passed);
	return (0);
}
