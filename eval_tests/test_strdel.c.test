/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:46:24 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 19:53:32 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_strdel(void)
{
	int	passed = 0;

	char	*str1 = malloc(sizeof(char) *  15);
	char	*str2 = NULL;

	printf("ft_strdel:\t\t\t");

	ft_strdel(&str1);

	if (str1 == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 1: str1 != NULL \n>>%s<<", str1);
		CLEAR
	}

	ft_strdel(&str2);
	passed++;

	if (passed == 2)
	{
		GREEN
		printf("OK, check for leaks\n");
		CLEAR
		return (1);
	}
	return (0);
}
