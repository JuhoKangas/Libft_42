/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:45:55 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/22 15:35:00 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int		test_memchr(void)
{
	int passed = 0;
	char *str = "Hello world";

	char *ret1 = ft_memchr(str, 'o', 12);
	char *ret2 = memchr(str, 'o', 12);

	printf("ft_memchr:\t\t\t");
	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 1: ret1 != ret2 \nret1 = %s\nret2 = %s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_memchr(str, 'x', 12);
	ret2 = memchr(str, 'x', 12);

	if (ret1 == NULL && ret2 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 2: ret1 != ret2 \nret1 = %s\nret2 = %s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_memchr(str, 'o', 4);
	ret2 = memchr(str, 'o', 4);

	if (ret1 == NULL && ret2 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 3: ret1 != ret2 \nret1 = %s\nret2 = %s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_memchr(str, '\0', 12);
	ret2 = memchr(str, '\0', 12);

	if (ret1 == ret2)
		passed++;
	else
	{
		RED
		printf("ERROR 4: ret1 != ret2 \nret1 = %s\nret2 = %s\n", ret1, ret2);
		CLEAR
	}

	ret1 = ft_memchr(str, 'H', 0);
	ret2 = memchr(str, 'H', 0);

	if (ret1 == NULL && ret2 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 5: ret1 != ret2 \nret1 = %s\nret2 = %s\n", ret1, ret2);
		CLEAR
	}
	
	if (passed == 5)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}

	return (0);
}

