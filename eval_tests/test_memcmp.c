/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:24:20 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/23 14:07:49 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_libft.h"

int	test_memcmp(void)
{
	int	passed = 0;

	char *str1 = "Testing string that\0 continues";
	char *str2 = "Testing string that\0 continues";
	char *str3 = "Testing string that ";

	printf("ft_memcmp:\t\t\t");

	if (ft_memcmp(str1, str2, strlen(str1) + 1) == memcmp(str1, str2, strlen(str1) + 1))
		passed++;
	else
	{
		RED
		printf("ERROR 1: ft_memcmp != memcmp\n%d\n%d\n", ft_memcmp(str1, str2, strlen(str1) + 1), memcmp(str1, str2, strlen(str1) + 1));
		CLEAR
	}

	if (ft_memcmp(str1, str3, strlen(str3)) == memcmp(str1, str3, strlen(str3)))
		passed++;
	else
	{
		RED
		printf("ERROR 2: ft_memcmp != memcmp\n%d\n%d\n", ft_memcmp(str1, str3, strlen(str3)), memcmp(str1, str3, strlen(str3)));
		CLEAR
	}

	if (ft_memcmp(str1, str3, strlen(str3) - 1) == memcmp(str1, str3, strlen(str3) - 1))
		passed++;
	else
	{
		RED
		printf("ERROR 3: ft_memcmp != memcmp\n%d\n%d\n", ft_memcmp(str1, str3, strlen(str3) - 1), memcmp(str1, str3, strlen(str3) - 1));
		CLEAR
	}

	if (ft_memcmp("\0", "\0", 1) == memcmp("\0", "\0", 1))
		passed++;
	else
	{
		RED
		printf("ERROR 4: ft_memcmp != memcmp with (\"\\0\", \"\\0\", 1)\n%d\n%d\n", ft_memcmp("\0", "\0", 1), memcmp("\0", "\0", 1));
		CLEAR
	}

	if (ft_memcmp("\0", "\200", 1) < 0 &&  memcmp("\0", "\200", 1) < 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ft_memcmp != memcmp with (\"\\0\", \"\\200\", 1)\n%d\n%d\n", ft_memcmp("\0", "\200", 1), memcmp("\0", "\200", 1));
		CLEAR
	}

	if (ft_memcmp("\0", "\200", 0) == memcmp("\0", "\200", 0))
		passed++;
	else
	{
		RED
		printf("ERROR 6: ft_memcmp != memcmp with (\"\\0\", \"\\200\", 0)\n%d\n%d\n", ft_memcmp("\0", "\200", 0), memcmp("\0", "\200", 0));
		CLEAR
	}

	if (ft_memcmp("", "", 1) == memcmp("", "", 1))
		passed++;
	else
	{
		RED
		printf("ERROR 7: ft_memcmp != memcmp with (\"0\", \"\", 1)\n%d\n%d\n", ft_memcmp("", "", 1), memcmp("", "", 1));
		CLEAR
	}

	int i1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i2[] = {1, 2, 3, 4, 5, 6, 7, 8, 0};

	if (ft_memcmp(i1, i2, sizeof(int)*9) == memcmp(i1, i2, sizeof(int)*9))
		passed++;
	else
	{
		RED
		printf("ERROR 8: ft_memcmp != memcmp with (i1, i2, sizeof(int)*9)\n%d\n%d\n", ft_memcmp(i1, i2, sizeof(int)*9), memcmp(i1, i2, sizeof(int)*9));
	}
	
	if (ft_memcmp(i1, i2, sizeof(int)*10) == memcmp(i1, i2, sizeof(int)*10))
		passed++;
	else
	{
		RED
		printf("ERROR 9: ft_memcmp != memcmp with (i1, i2, sizeof(int)*10)\n%d\n%d\n", ft_memcmp(i1, i2, sizeof(int)*10), memcmp(i1, i2, sizeof(int)*10));
	}

	if (passed == 9)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
