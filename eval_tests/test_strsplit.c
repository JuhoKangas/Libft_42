/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:04:44 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/03 18:27:28 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

static void	ft_free_array(char **arr, int size)
{
	while (size > 0)
	{
		free(arr[size - 1]);
		size--;
	}
	free(arr);
}

static int	ft_array_size(char **arr)
{
	int size = 0;

	while (arr[size] != 0)
		size++;
	return (size);
}

int	test_strsplit(void)
{
	int passed = 0;
	char **str2 = ft_strsplit("*hello*fellow***students*", '*');

	printf("ft_strsplit:\t\t\t");

	if (ft_array_size(str2) == 3)
		passed++;
	else
	{
		RED
		printf("ERROR 1: Array size is not 4\n%d", ft_array_size(str2));
		CLEAR
	}

	if (strcmp(str2[0], "hello") == 0 && strcmp(str2[1], "fellow") == 0 && strcmp(str2[2], "students") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: Array doesn't match with string\nshould be:\nhello fellow students\n%s %s %s", str2[0], str2[1], str2[2]);
		CLEAR
	}

	ft_free_array(str2, 3);
	
	str2 = ft_strsplit("*hello*fellow***students*", ' ');

	if (strcmp(str2[0], "*hello*fellow***students*") == 0 && str2[1] == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: Array doesn't correspond to string:\n\"*hello*fellow***students*\"\n%s", str2[0]);
		CLEAR
	}

	ft_free_array(str2, 1);

	str2 = ft_strsplit("", ' ');

	if (str2[0] == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: str2[0] != 0\n%s", str2[0]);
		CLEAR
	}

	ft_free_array(str2, 1);

	str2 = ft_strsplit(0, '\0');

	if (str2 == NULL)
		passed++;
	else
	{
		printf("????");
	}

	if (passed == 5)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
