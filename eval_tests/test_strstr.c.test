/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:51:40 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 17:26:21 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strstr(void)
{
	int	passed = 0;

	char *str = "find the needlneedle needle in the haystack";

	printf("ft_strstr:\t\t\t");
	char *p1 = ft_strstr(str, "needle");
	char *p2 = strstr(str, "needle");

	if (p1 == p2)
		passed++;
	else
	{
		RED
		printf("ERROR 1: p1 != p2, \n%s\n%s\n", p1, p2);
		CLEAR
	}

	if (strcmp(p1, p2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: strcmp(p1, p2) != 0 \n%s\n%s\n", p1, p2);
		CLEAR
	}

	p1 = ft_strstr(str, "needle ");
	p2 = strstr(str, "needle ");

	if (strcmp(p1, p2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: strcmp(p1, p2) != 0 \n%s\n%s\n", p1, p2);
		CLEAR
	}

	p1 = ft_strstr(str, "");
	p2 = strstr(str, "");

	if (strcmp(p1, p2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: strcmp(p1, p2) != 0 \n%s\n%s\n", p1, p2);
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
