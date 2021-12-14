/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:30:57 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/01 20:28:59 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strsub(void)
{
	int	passed = 0;
	char *str1 = "copy this part only";
	char *str2 = ft_strsub(str1, 5, 9);

	printf("ft_strsub:\t\t\t");
	
	if (strcmp(str2, "this part") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp(str2, \"this part\") != 0\n%s\nthis part\n", str2);
		CLEAR
	}

	free(str2);

	str2 = ft_strsub("grab the first", 0, 1);

	if (strcmp(str2, "g") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp(str2, \"g\") != 0\nstr2 = %s", str2);
		CLEAR
	}

	free(str2);

	str2 = ft_strsub("grab the first", 1, 0);

	if (strcmp(str2, "") == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp(str2, \"\") != 0\nstr2 = %s", str2);
		CLEAR
	}

	free(str2);

	if (passed == 3)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
