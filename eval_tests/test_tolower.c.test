/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:26:09 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/10 16:05:36 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		test_tolower(void)
{
	char c = 0;
	int passed = 0;

	while (c <= 126)
	{
		if (ft_tolower(c) == tolower(c))
			passed++;
		else
		{
			printf("ft_tolower:\t\t\t");
			printf("\033[1;31m");
			printf("ERROR: %c\n", c);
			printf("\033[0m");
		}
		c++;
	}
	if (ft_tolower(127) == tolower(127))
		passed++;
	else
	{
		printf("ft_tolower:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: 127\n");
		printf("\033[0m");
	}
	if (ft_tolower(128) == tolower(128))
		passed++;
	else
	{
		printf("ft_tolower:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: 128\n");
		printf("\033[0m");
	}
	if (ft_tolower(-1) == tolower(-1))
		passed++;
	else
	{
		printf("ft_tolower:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: -1\n");
		printf("\033[0m");
	}
	if (passed == 130)
	{
		printf("ft_tolower:\t\t\t");
		printf("\033[1;32m");
		printf("OK\n");
		printf("\033[0m");
		return (1);
	}
	return (0);
}
