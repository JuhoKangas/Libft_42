/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:49:30 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 18:05:27 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_memdel(void)
{
	int	passed = 0;

	char	*str = malloc(sizeof(char) * 100);
	int		*int_arr = malloc(sizeof(int) * 10);
	void	*ptr = malloc(42);

	ft_memdel((void**)&str);
	ft_memdel(&ptr);
	ft_memdel((void**)&int_arr);

	printf("ft_memdel:\t\t\t");

	if (str == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: str != NULL\n");
		CLEAR
	}

	if (ptr == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: ptr != NULL\n");
		CLEAR
	}

	if (int_arr == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: int_arr != NULL\n");
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
