/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:07:13 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/26 14:17:08 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strclr(void)
{
	int	passed = 0;

	char *str1 = malloc(sizeof(char) * 50);
	char str2[50] = {'\0'};

	for (int i = 0; i < 50; i++)
		str1[i] = 'c';

	ft_strclr(str1);

	printf("ft_strclr:\t\t\t");

	if (memcmp(str1, str2, 50) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: memcmp != 0\n%s\n%s\n", str1, str2);
		CLEAR
	}

	free(str1);

	if (passed)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
