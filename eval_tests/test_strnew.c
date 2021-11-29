/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:30:28 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 19:33:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strnew(void)
{
	int	passed = 0;

	char	str1[16] = {'\0'};
	char	*str2 = ft_strnew(15);

	printf("ft_strnew\t\t\t");

	if (memcmp(str1, str2, 16) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: memcmp(str1, str2, 16) != 0\n");
		CLEAR
	}

	free(str2);
	str2 = ft_strnew(0);

	if (str2 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strnew(0) != NULL\n>>%s<<\n", str2);
		CLEAR
	}

	free(str2);

	if (passed == 2)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
