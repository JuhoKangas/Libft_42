/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:59:38 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/11 18:21:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_memccpy(void)
{
	int	passed = 0;

	char src[] = "This is a sentence";
	char dest1[19] = {'\0'};
	char dest2[19] = {'\0'};

	void *ret1 = ft_memccpy(dest1, src, '@', strlen(src));
	void *ret2 = memccpy(dest2, src, '@', strlen(src));
	
	printf("ft_memccpy:\t\t\t");

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ret1 != ret2\n");
		CLEAR
	}
	
	ret1 = ft_memccpy(dest1, "find\0 null", 0, 10);
	ret2 = memccpy(dest2, "find\0 null", 0, 10);

	if (memcmp(ret1, ret2, 5) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 2: memcmp(dest1, dest2, 5) != 0, %d\n\t\t\t\t%s\n\t\t\t\t%s\n", memcmp(ret1, ret2, 5), ret1, ret2);
		CLEAR
	}

	ret1 = ft_memccpy(dest1, "", 0, 0 );
	ret2 = memccpy(dest2, "", 0, 0 );

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ret1 != ret2\n");
		CLEAR
	}

	int i_src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i_dst1[10];
	int i_dst2[10];

	ret1 = ft_memccpy(i_dst1, i_src, 127, sizeof(int) * 10);
	ret2 = memccpy(i_dst2, i_src, 127, sizeof(int) * 10);

	if (ret1 == NULL && ret2 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 4: memcmp(ret1, ret2, sizeof(int) * 10) != 0\n");
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
