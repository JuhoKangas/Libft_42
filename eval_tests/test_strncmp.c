/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:46:21 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 13:17:17 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strncmp(void)
{
	int passed = 0;

	printf("ft_strncmp:\t\t\t");

	if (ft_strncmp("Hello World! \t", "Hello World! \t", 15) == 0 && strncmp("Hello World! \t", "Hello World! \t", 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ft_strncmp != strncmp with (\"Hello World \\t\", \"Hello World \\t\", 15), ");
		printf("%d, %d", ft_strncmp("Hello World! \t", "Hello World! \t", 15), strncmp("Hello World! \t", "Hello World! \t", 15));
		CLEAR
	}

	if (ft_strncmp("\200", "\0", 1) > 0 && strncmp("\200", "\0", 1) > 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: ft_strncmp != strncmp with (\"\\200\", \"\\0\", 1)\n");
		CLEAR
	}

	if (ft_strncmp("abcde", "abcd", 4) == 0 && strncmp("abcde", "abcd", 4) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ft_strncmp != strncmp with (\"abcde\", \"abcd\", 4)\n");
		CLEAR
	}

	if (ft_strncmp("", "\0", 1) == 0 && strncmp("", "\0", 1) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: ft_strncmp != strncmp with (\"\", \"\\0\", 1)\n");
		CLEAR
	}

	if (ft_strncmp("test\0 test", "test", 10) == 0 && strncmp("test\0 test", "test", 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ft_strncmp != strncmp with (\"test\\0 test\", \"test\", 10)\n");
		CLEAR
	}
	if (ft_strncmp("abcd", "abcde", 5) < 0 && strncmp("abcd", "abcde", 5) < 0)
		passed++;
	else
	{
		RED
		printf("ERROR 6: ft_strncmp != strncmp with (\"abcd\", \"abcde\", 5)\n");
		CLEAR
	}

	if (passed == 6)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
