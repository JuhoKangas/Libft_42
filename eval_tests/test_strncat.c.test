/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:21:55 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/24 18:10:22 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strncat(void)
{
	int passed = 0;

	char *str1 = malloc(sizeof(char) * 25);
	char *str2 = malloc(sizeof(char) * 25);
	char *src = "concat this";

	str1[0] = '\0';
	str2[0] = '\0';

	char *ret1 = ft_strncat(str1, "start with this but cut this", 16);
	char *ret2 = strncat(str2, "start with this but cut this", 16);

	printf("ft_strncat:\t\t\t");

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (strcmp(str1, str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp(str1, str2) != 0\n%s\n%s\n", str1, str2);
		CLEAR
	}

	ret1 = ft_strncat(str1, src, 16);
	ret2 = strncat(str2, src, 16);

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (strcmp(str1, str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: strcmp(str1, str2) != 0\n%s\n%s\n", str1, str2);
		CLEAR
	}

	ret1 = ft_strncat(str1, "", 3);
	ret2 = strncat(str2, "", 3);

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (strcmp(str1, str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 6: strcmp(str1, str2) != 0\n%s\n%s\n", str1, str2);
		CLEAR
	}

	ret1 = ft_strncat(str1, "string", 0);
	ret2 = strncat(str2, "string", 0);

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 7: strcmp(ret1, ret2) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (strcmp(str1, str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 8: strcmp(str1, str2) != 0\n%s\n%s\n", str1, str2);
		CLEAR
	}

	if (passed == 8)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
