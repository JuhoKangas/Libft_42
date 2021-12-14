/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:29:31 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/25 17:31:33 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strlcat(void)
{
	int	passed = 0;

	char *str1 = malloc(sizeof(char) * 20);
	char *str2 = malloc(sizeof(char) * 20);
	char *src = "concat this";

	str1[0] = '\0';
	str2[0] = '\0';

	size_t ret1 = ft_strlcat(str1, "this first", 20);
	size_t ret2 = strlcat(str2, "this first", 20);

	printf("ft_strlcat:\t\t\t");

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);
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

	ret1 = ft_strlcat(str1, src, 20);
	ret2 = strlcat(str2, src, 20);

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ret1 != ret2\n%zu\n%zu\n", ret1, ret2);
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

	if (passed == 4)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
