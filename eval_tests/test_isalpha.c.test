/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:54:18 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/15 13:30:38 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "test_libft.h"
#include "../libft.h"

int	test_isalpha(void)
{
	int passed = 0;
	char c = 0;

	while (c <= 126)
	{
		if (ft_isalpha(c) == isalpha(c))
			passed++;
		else
		{
			RED
			printf("ft_isalpha:\t\t\tERROR: ft_isalpha(c) != isalpha(c), %d %d %c\n", ft_isalpha(c), isalpha(c), c);
			CLEAR
		}
	c++;
	}

	if (passed == 127)
	{
		printf("ft_isalpha:\t\t\t");
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
