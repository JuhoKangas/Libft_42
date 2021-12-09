/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:06:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 16:17:45 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int test_strequ(void)
{
	int passed = 0;

	char *str1 = "Test this";
	char *str2 = "Test this";

	printf("ft_strequ:\t\t\t");
	if (ft_strequ(str1, str2))
		passed++;
	else
	{
		RED
		printf("ERROR 1: ft_strequ(str1, str2)\n%d\n%s\n%s\n", ft_strequ(str1, str2), str1, str2);
		CLEAR
	}

	if (ft_strequ(str1, "Test this"))
		passed++;
	else
	{
		RED
		printf("ERROR 2: ft_strequ(str1, \"Test this\")\n%d\n", ft_strequ(str1, "Test this"));
		CLEAR
	}

	if (ft_strequ("Test this", str2))
		passed++;
	else
	{
		RED
		printf("ERROR 3: ft_strequ(\"Test this\", str2)\n%d\n", ft_strequ("Test this", str2));
		CLEAR
	}

	if (ft_strequ("", ""))
		passed++;
	else
	{
		RED
		printf("ERROR 4: ft_strequ(\"\", \"\") == 0\n");
		CLEAR
	}

	if (ft_strequ(str1, "") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ft_strequ(str1, \"\") != 0\n");
		CLEAR
	}

	if (ft_strequ("", str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 6: ft_strequ(\"\", str2) != 0\n");
		CLEAR
	}

	if (ft_strequ("Test this ", str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 7: ft_strequ(\"Test this \", str2)\n%d\n", ft_strequ("Test this ", str2));
		CLEAR
	}

	if (passed == 7)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
