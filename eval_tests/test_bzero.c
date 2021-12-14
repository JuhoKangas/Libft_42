/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:36:59 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/11 15:47:53 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "test_libft.h"

int	test_bzero()
{
	int	passed = 0;

	char str1[] = "This is a sentence";
	char str2[] = "This is a sentence";

	int i1[] = {24, 53, 12, 0, 34};
	int i2[] = {24, 53, 12, 0, 34};

	ft_bzero(str1, 10);
	bzero(str2, 10);

	printf("ft_bzero:\t\t\t");
	if (memcmp(str1, str2, strlen(str1)) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: memcmp(str1, str2, strlen(str1)) != 0, %i \n\t\t\t\t%s\n\t\t\t\t%s", memcmp(str1, str2, strlen(str1)), str1, str2);
		CLEAR
	}
	
	ft_bzero(i1, sizeof(int) * 5);
	bzero(i2, sizeof(int) * 5);

	if (memcmp(i1, i2, sizeof(int) * 5) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: memcmp(i1, i2, sizeof(int) * 5) != 0, %d\n\t\t\t\t%d %d %d %d %d\n\t\t\t\t%d %d %d %d %d\n", memcmp(str1, str2, sizeof(int)*5), i1[0], i1[1], i1[2], i1[3], i1[4], i2[0], i2[1], i2[2], i2[3], i2[4]);
		CLEAR
	}
	if (passed == 2)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return(0);
}
