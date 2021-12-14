/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:17 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/02 17:20:12 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strjoin(void)
{
	int	passed = 0;
	char *str;
	char *check = "Combine these two strings";

	printf("ft_strjoin:\t\t\t");

	str = ft_strjoin("Combine these ", "two strings");

	if (memcmp(str, check, strlen(check + 1)) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: memcmp != 0 \n%s\n%s\n", str, check);
		printf("(if the strings look the same the problem is probably no null character)\n");
		CLEAR
	}

	free(str);

	str = ft_strjoin("Only one", "");

	if (strcmp(str, "Only one") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp != 0\n%s\nOnly one\n", str);
		CLEAR
	}

	free(str);

	str = ft_strjoin("", "");

	if (strcmp(str, "") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp != 0\n%s\n(should be nothing)\n", str);
		CLEAR
	}

	if (passed == 3)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
