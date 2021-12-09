/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:26:09 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/10 16:05:08 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int		test_toupper(void)
{
	char c = 0;
	int passed = 0;

	while (c <= 126)
	{
		if (ft_toupper(c) == toupper(c))
			passed++;
		else
		{
			printf("ft_toupper:\t\t\t");
			printf("\033[1;31m");
			printf("ERROR: %c\n", c);
			printf("\033[0m");
		}
		c++;
	}
	if (ft_toupper(127) == toupper(127))
		passed++;
	else
	{
		printf("ft_toupper:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: 127\n");
		printf("\033[0m");
	}
	if (ft_toupper(128) == toupper(128))
		passed++;
	else
	{
		printf("ft_toupper:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: 128\n");
		printf("\033[0m");
	}
	if (ft_toupper(-1) == toupper(-1))
		passed++;
	else
	{
		printf("ft_toupper:\t\t\t");
		printf("\033[1;31m");
		printf("ERROR: -1\n");
		printf("\033[0m");
	}
	if (passed == 130)
	{
		printf("ft_toupper:\t\t\t");
		printf("\033[1;32m");
		printf("OK\n");
		printf("\033[0m");
		return (1);
	}
	return (0);
}
