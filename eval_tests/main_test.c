/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:07:49 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/15 20:48:25 by jkangas          ###   ########.fr       */
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
	passed += test_strcmp();
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
	passed += test_memccpy();
	tests++;

	printf("\nTests ran: \t\t\t%i\nTests passed: \t\t\t%i\n", tests, passed);
	return (0);
}