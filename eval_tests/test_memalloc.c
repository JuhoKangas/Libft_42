/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:07:50 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 17:35:52 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_memalloc(void)
{
	int passed = 0;

	printf("ft_memalloc:\t\t\t");

	char	mem1[15] = {'\0'};
	void	*ptr;
	ptr = ft_memalloc(15);

	if (memcmp(mem1, ptr, 15) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: memcmp(mem1, ptr, 15) != 0\n");
		CLEAR
	}

	free(ptr);
	ptr = ft_memalloc(0);

	if (ptr == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 2: ptr != NULL with size 0\n");
		CLEAR
	}

	free(ptr);

	if ((ptr = ft_memalloc(-1)) == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 3: (ptr = ft_memalloc(-1)) != NULL\n");
		CLEAR
	}

	free(ptr);

	if (passed == 3)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
