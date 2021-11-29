/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:56:10 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 19:18:05 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>

#define RED printf("\033[1;31m");
#define GREEN printf("\033[1;32m");
#define CLEAR printf("\033[0m");

void	test_putchar(char c);
void	test_putstr(char const *s);
int		test_strlen(void);
int		test_strdup(void);
int		test_strcmp(void);
int		test_strncmp(void);
int		test_strcpy(void);
int		test_strncpy(void);
int		test_strstr(void);
int		test_strnew(void);
int		test_strclr(void);
int		test_strequ(void);
int		test_strnequ(void);
int		test_strcat(void);
int		test_strncat(void);
int		test_strlcat(void);
int		test_strchr(void);
int		test_strrchr(void);
int		test_strnstr(void);
int		test_atoi(void);
int		test_isalnum(void);
int		test_isalpha(void);
int		test_isascii(void);
int		test_isdigit(void);
int		test_isprint(void);
int		test_toupper(void);
int		test_tolower(void);
int		test_memset(void);
int		test_bzero(void);
int		test_memcpy(void);
int		test_memccpy(void);
int		test_memchr(void);
int		test_memdel(void);
int		test_memalloc(void);
int		test_memcmp(void);
int		test_memmove(void);

#endif
