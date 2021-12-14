/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:04:41 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/22 17:20:57 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int		test_strrchr(void)
{
	int passed = 0;
	char *str = "Hello@World@";
	char *str2 = "";

	printf("ft_strrchr:\t\t\t");

	char *ret1 = ft_strrchr(str, 'o');
	char *ret2 = strrchr(str, 'o');

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strrchr(str, 'H');
	ret2 = strrchr(str, 'H');

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 2: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strrchr(str, '\0');
	ret2 = strrchr(str, '\0');

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_strrchr(str, '@');
	ret2 = strrchr(str, '@');

	if (strcmp(ret1, ret2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
	}
	
	ret1 = ft_strrchr(str2, '@');
	ret2 = strrchr(str2, '@');

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ret1 != ret2\n%s\n%s\n", ret1, ret2);
		CLEAR
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

