/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:06:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/29 13:25:51 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int test_strequ(void)
{
	int passed = 0;

	char *str1 = "Test this";
	char *str2 = "Test this";

	if (ft_strequ(str1, str2))
		passed++;
	else
	{
		RED
		printf("ERROR 1: \n%d\n%s\n%s\n", ft_strequ(str1, str2), str1, str2);
		CLEAR
	}

	if (ft_strequ(str1, "Test this"))
		passed++;
	else
	{
		RED
		printf("ERROR 2: \n%d\n", ft_strequ(str1, "Test this"));
		CLEAR
	}

	if (passed == 2)
	{
		GREEN
		printf("OK/n");
		CLEAR
		return (1);
	}
	return (0);
}
