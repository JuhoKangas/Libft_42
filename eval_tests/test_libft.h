/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:56:10 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 17:30:58 by jkangas          ###   ########.fr       */
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
int		test_strnstr(void);
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

#endif
