/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:23:26 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/02 20:51:58 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strtrim(void)
{
	int passed = 0;
	char str[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *ret = ft_strtrim(str);

	printf("ft_strtrim:\t\t\t");

	if (strcmp(ret, "Hello \t  Please\n Trim me !") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp != 0\n%s\nHello \t  Please\n Trim me !\n", ret);
		CLEAR
	}

	free(ret);

	ret = ft_strtrim("trim this");

	if (strcmp(ret, "trim this") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp != 0\n%s\ntrim this\n", ret);
		CLEAR
	}

	free(ret);

	ret = ft_strtrim("  \n \t");

	if (strcmp(ret, "") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp != 0\n%s\n(should be nothing)\n", ret);
		CLEAR
	}

	free(ret);

	ret = ft_strtrim("");

	if (strcmp(ret, "") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: strcmp != 0\n%s\n(should be nothing)\n", ret);
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
