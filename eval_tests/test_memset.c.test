/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:36:59 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/11 15:33:18 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_libft.h"

int	test_memset()
{
	int	passed = 0;

	char str1[] = "This is a sentence";
	char str2[] = "This is a sentence";

	int i1[] = {24, 53, 12, 0, 34};
	int i2[] = {24, 53, 12, 0, 34};

	ft_memset(str1, '*', 10);
	memset(str2, '*', 10);

	if (memcmp(str1, str2, strlen(str1)) == 0)
		passed++;
	else
	{
		printf("ft_memset:\t\t\t");
		RED
		printf("ERROR: memcmp(str1, str2, strlen(str1)) != 0, %i \n\t\t\t\t%s\n\t\t\t\t%s\n", memcmp(str1, str2, strlen(str1)), str1, str2);
		CLEAR
	}
	
	ft_memset(i1, 0, sizeof(int) * 5);
	memset(i2, 0, sizeof(int) * 5);

	if (memcmp(i1, i2, sizeof(int) * 5) == 0)
		passed++;
	else
	{
		printf("ft_memset:\t\t\t");
		RED
		printf("ERROR: memcmp(i1, i2, sizeof(int) * 5) != 0, %d\n\t\t\t\t%d %d %d %d %d\n\t\t\t\t%d %d %d %d %d\n", memcmp(str1, str2, sizeof(int)*5), i1[0], i1[1], i1[2], i1[3], i1[4], i2[0], i2[1], i2[2], i2[3], i2[4]);
		CLEAR
	}
	if (passed == 2)
	{
		printf("ft_memset:\t\t\t");
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return(0);
}
