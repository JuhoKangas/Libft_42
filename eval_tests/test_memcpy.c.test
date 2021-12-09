/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:10:28 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/11 18:05:25 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_memcpy(void)
{
	int	passed = 0;

	char src[] = "This is a sentence";
	char dest1[19] = {'\0'};
	char dest2[19] = {'\0'};

	void *ret1 = ft_memcpy(dest1, src, strlen(src));
	void *ret2 = memcpy(dest2, src, strlen(src));
	
	printf("ft_memcpy:\t\t\t");

	if (memcmp(ret1, ret2, 19) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: memcmp(dest1, dest2, 19) != 0, %d\n\t\t\t\t%s\n\t\t\t\t%s\n", memcmp(ret1, ret2, 19), ret1, ret2);
		CLEAR
	}
	
	ret1 = ft_memcpy(dest1, "\0", 0);
	ret2 = memcpy(dest2, "\0", 0);

	if (memcmp(ret1, ret2, 19) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: memcmp(dest1, dest2, 19) != 0, %d\n\t\t\t\t%s\n\t\t\t\t%s\n", memcmp(ret1, ret2, 19), ret1, ret2);
		CLEAR
	}

	int i_src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i_dst1[10];
	int i_dst2[10];

	ret1 = ft_memcpy(i_dst1, i_src, sizeof(int) * 10);
	ret2 = ft_memcpy(i_dst2, i_src, sizeof(int) * 10);

	if (memcmp(ret1, ret2, sizeof(int) * 10) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: memcmp(ret1, ret2, sizeof(int) * 10) != 0");
		CLEAR
	}
	if (passed == 3)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
