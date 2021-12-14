/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:05:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/06 20:13:24 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_itoa(void)
{
	int	passed = 0;

	char *str = ft_itoa(0);
	printf("ft_itoa:\t\t\t");

	if (strcmp(str, "0") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp(str, '0') != 0\n%s\n", str);
		CLEAR
	}

	free(str);

	str = ft_itoa(-1);
	if (strcmp(str, "-1") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp(str, '-1') != 0\n%s\n", str);
		CLEAR
	}

	free(str);

	str = ft_itoa(42);
	if (strcmp(str, "42") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp(str, '42') != 0\n%s\n", str);
		CLEAR
	}

	free(str);
	
	str = ft_itoa(-2147483648);
	if (strcmp(str, "-2147483648") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: can't handle INT_MIN\n%s\n", str);
		CLEAR
	}

	free(str);

	str = ft_itoa(2147483647);
	if (strcmp(str, "2147483647") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: can't handle INT_MAX\n%s\n", str);
		CLEAR
	}

	free(str);

	if (passed == 5)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
