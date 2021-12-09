/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:28:40 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/18 17:57:23 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strnstr(void)
{
	int	passed = 0;

	char *str = "find the needlneedle needle in the haystack";

	char *p1 = ft_strnstr(str, "needle", 20);
	char *p2 = strnstr(str, "needle", 20);

	printf("ft_strnstr:\t\t\t");
	if (strcmp(p1, p2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp(p1, p2) != 0 \n%s\n%s\n", p1, p2);
		CLEAR
	}

	p1 = ft_strnstr(str, "needle", 19);
	p2 = strnstr(str, "needle", 19);

	if (p1 == p2)
		passed++;
	else
	{
		RED
		printf("ERROR 2: p1 != p2 \n%s\n%s\n", p1, p2);
		CLEAR
	}
	p1 = ft_strnstr(str, "", 20);
	p2 = strnstr(str, "", 20);
	
	if (strcmp(p1, p2) == 0)
		passed++;
	else
		printf("ERROR 3: strcmp(p1, p2) != 0\n%s\n%s\n", p1, p2);

	str = "need the /0 needle!";

	p1 = ft_strnstr(str, "needle", 19);
	p2 = strnstr(str, "needle", 19);

	if (p1 == p2)
		passed++;
	else
		printf("ERROR 4: p1 != p2 (after null)");

	if (passed == 4)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
    return (0);

}
