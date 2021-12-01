/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:45:40 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/01 19:46:58 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

static	char	char_tolower(char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int	test_strmap(void)
{
	int	passed = 0;

	char *str1;
	char str2[] = "ABCDEFGHIJKLMNOP";
	char check[] = "abcdefghijklmnop";

	str1 = ft_strmap(str2, char_tolower);

	printf("ft_strmap:\t\t\t");

	if (strcmp(str1, check) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: strcmp != 0\n%s\n%s\n", str1, check);
		CLEAR
	}

	free(str1);

	if (passed == 1)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
