/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:01:49 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/01 19:54:59 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

static	char	char_tolower(unsigned int i, char c)
{
	if (i % 2 == 0)
		c += 32;
	return (c);
}

int	test_strmapi(void)
{
	int	passed = 0;

	char *str1;
	char str2[] = "ABCDEFGHIJKLMNOP";
	char check[] = "aBcDeFgHiJkLmNoP";

	str1 = ft_strmapi(str2, char_tolower);

	printf("ft_strmapi:\t\t\t");

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
