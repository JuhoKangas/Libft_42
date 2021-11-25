/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:11:32 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/24 16:10:49 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_libft.h"
#include <stdlib.h>

int	test_strcat(void)
{
	int		passed = 0;
	char	*str1 = malloc(sizeof(char) * 30);
	char	*str2 = malloc(sizeof(char) * 30);
	char	*src = " concat this pls";

	str1[0] = '\0';
	str2[0] = '\0';

	char *ret1 = ft_strcat(str1, "start and");
	char *ret2 = strcat(str2, "start and");

	printf("ft_strcat:\t\t\t");

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

	ret1 = ft_strcat(str1, src);
	ret2 = strcat(str2, src);

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

	free(str1);
	free(str2);

	if (passed == 4)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
