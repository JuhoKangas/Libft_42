/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:21:39 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 16:46:30 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strnequ(void)
{
	int	passed = 0;

	char *str1 = "Hello, this is a string";
	char *str2 = "Hello, this is a string"; //23

	printf("ft_strnequ:\t\t\t");

	if (ft_strnequ(str1, str2, 23))
		passed++;
	else
	{
		RED
		printf("ERROR 1: ft_strnequ(str1, str2, 23) != 1\n");
		CLEAR
	}

	if (ft_strnequ("abcd", "abcde", 4))
		passed++;
	else
	{
		RED
		printf("ERROR 2: ft_strnequ(\"abcd\", \"abcde\", 4) != 1\n");
		CLEAR
	}

	if (ft_strnequ("abcd", "abcde", 5) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ft_strnequ(\"abcd\", \"abcde\", 5) != 1\n");
		CLEAR
	}

	if (ft_strnequ("", "\0", 1) == 1)
		passed++;
	else
	{
		RED
		printf("ERROR 4: ft_strnequ(\"\", \"\\0\", 1) != 1\n");
		CLEAR
	}

	if (ft_strnequ("test\0 test", "test", 10) == 1)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ft_strnequ(\"test \\0 test\", \"test\", 10) != 1\n");
		CLEAR
	}

	if (passed == 5)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
