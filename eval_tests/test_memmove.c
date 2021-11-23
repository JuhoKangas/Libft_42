/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:17:21 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/23 18:31:51 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_memmove(void)
{
	int	passed = 0;
	char src1[10] = "123456789";
	char src2[10] = "123456789";
	char *dst1 = &src1[2];
	char *dst2 = &src2[2];

	void *ret1 = ft_memmove(dst1, src1, 4);
	void *ret2 = memmove(dst2, src2, 4);

	printf("ft_memmove:\t\t\t");

	if (memcmp(ret1, ret2, 8) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: memcmp(ret1, ret2, 8) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (memcmp(dst1, dst2, 8) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: memcmp(dst1, dst2, 8) != 0\n%s\n%s\n", dst1, dst2);
		CLEAR
	}

	ret1 = ft_memmove(src1, dst1, 0);
	ret2 = memmove(src2, dst2, 0);

	if (memcmp(ret1, ret2, 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 3: memcmp(ret1, ret2, 10) != 0\n%s\n%s\n", ret1, ret2);
		CLEAR
	}

	if (memcmp(src1, src2, 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 4: memcmp(dst1, dst2, 10) != 0\n%s\n%s\n", dst1, dst2);
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
