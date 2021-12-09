/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:36:36 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 13:58:18 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strncpy(void)
{
	int	passed = 0;

	char *dest1 = malloc(sizeof(char) * 10);
	char *dest2 = malloc(sizeof(char) * 10);
	char *src = "xxxxxxxxx";
	
	char *ret1 = ft_strncpy(dest1, src, 9);
	char *ret2 = strncpy(dest2, src, 9);

	printf("ft_strncpy:\t\t\t");
	
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
	free(dest1);
	free(dest2);

	dest1 = malloc(sizeof(char) * 15);
	dest2 = malloc(sizeof(char) * 15);
	ret1 = ft_strncpy(dest1, src, 15);
	ret2 = strncpy(dest2, src, 15);

	if (memcmp(ret1, ret2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: memcmp(ret1, ret2, 15) != 0\n");
		CLEAR
	}

	if (memcmp(dest1, dest2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: memcmp(dest1, dest2, 15) != 0\n");
		CLEAR
	}
	free(dest1);
	free(dest2);

	dest1 = malloc(sizeof(char) * 15);
	dest2 = malloc(sizeof(char) * 15);
	ret1 = ft_strncpy(dest1, src, 20);
	ret2 = strncpy(dest2, src, 20);

	if (memcmp(ret1, ret2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: memcmp(ret1, ret2, 15) != 0\n");
		CLEAR
	}

	if (memcmp(dest1, dest2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 6: memcmp(dest1, dest2, 15) != 0\n");
		CLEAR
	}

	ret1 = ft_strncpy(dest1, "", 1);
	ret2 = strncpy(dest2, "", 1);

	if (memcmp(ret1, ret2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 7: memcmp(ret1, ret2, 15) != 0\n");
		CLEAR
	}

	if (memcmp(dest1, dest2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 8: memcmp(dest1, dest2, 15) != 0\n");
		CLEAR
	}

	ret1 = ft_strncpy(dest1, "c", 0);
	ret2 = strncpy(dest2, "c", 0);

	if (memcmp(ret1, ret2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 9: memcmp(ret1, ret2, 15) != 0\n");
		CLEAR
	}

	if (memcmp(dest1, dest2, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 10: memcmp(dest1, dest2, 15) != 0\n");
		CLEAR
	}

	free(dest1);
	free(dest2);

	if (passed == 10)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
