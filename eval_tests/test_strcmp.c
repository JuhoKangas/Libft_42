/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:07:54 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/15 20:34:26 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strcmp(void)
{
	int passed = 0;

	char *str1 = "This is a sentence";
	char *str2 = "This is a sentence";

	char *str3 = "This is a sentence but longer";
	char *str4 = "This is";

	char *empty = "";

	if (ft_strcmp(str1, str2) == strcmp(str1, str2))
		passed++;
	else
	{
		printf("ft_strcmp:\t\t\t");
		RED
		printf("ERROR 1: ft_strcmp(str1, str2) != strcmp(str1, str2), %d %d\n", ft_strcmp(str1, str2), strcmp(str1, str2));
		CLEAR
	}

	if (ft_strcmp(str3, str4) > 0 && strcmp(str3, str4) > 0)
		passed++;
	else
	{
		printf("ft_strcmp:\t\t\t");
		RED
		printf("ERROR 2: ft_strcmp(str3, str4) != strcmp(str3, str4), %d %d\n", ft_strcmp(str3, str4), strcmp(str3, str4));
		CLEAR
	}

	if (ft_strcmp(str1, str3) < 0 && strcmp(str1, str3) < 0)
		passed++;
	else
	{
		printf("ft_strcmp:\t\t\t");
		RED
		printf("ERROR 3: ft_strcmp(str1, str3) != strcmp(str1, str3), %d %d\n", ft_strcmp(str1, str3), strcmp(str1, str3));
		CLEAR
	}

	if (ft_strcmp(str1, empty) > 0 && strcmp(str1, empty) > 0)
		passed++;
	else
	{
		printf("ft_strcmp:\t\t\t");
		RED
		printf("ERROR 4: ft_strcmp(str1, empty) != strcmp(str1, empty), %d %d\n", ft_strcmp(str1, empty), strcmp(str1, empty));
		CLEAR
	}
	if (passed == 4)
	{
		printf("ft_strcmp:\t\t\t");
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
} 
