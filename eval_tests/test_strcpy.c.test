/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:10:59 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 13:12:20 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strcpy(void)
{
	int	passed = 0;

	char *dest1 = malloc(sizeof(char) * 10);
	char *dest2 = malloc(sizeof(char) * 10);
	char *src = "xxxxxxxxx";
	
	char *ret1 = ft_strcpy(dest1, src);
	char *ret2 = strcpy(dest2, src);

	printf("ft_strcpy:\t\t\t");
	
	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp(ret1, ret2) != 0\n");
		CLEAR
	}

	if (strcmp(dest1, dest2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp(dest1, dest2) != 0\n");
		CLEAR
	}

	ret1 = ft_strcpy(dest1, "666");
	ret2 = strcpy(dest2, "666");

	if (memcmp(ret1, ret2, 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: memcmp(ret1, ret2, 10) != 0\n");
		CLEAR
	}

	if (memcmp(dest1, dest2, 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: memcmp(dest1, dest2, 10) != 0\n");
		CLEAR
	}

	free(dest1);
	free(dest2);

	if (passed == 4)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
