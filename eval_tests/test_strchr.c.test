/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:35:11 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/25 14:24:21 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int		test_strchr(void)
{
	int passed = 0;
	char *str = "Hello@World@";

	printf("ft_strchr:\t\t\t");

	char *ret1 = ft_strchr(str, 'H');
	char *ret2 = strchr(str, 'H');

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strchr(str, 'x');
	ret2 = strchr(str, 'x');

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 2: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strchr(str, '\0');
	ret2 = strchr(str, '\0');

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strchr(str, '@');
	ret2 = strchr(str, '@');

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (passed == 4)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
