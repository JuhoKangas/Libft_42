/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:54:18 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/15 13:45:34 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "test_libft.h"
#include "../libft.h"

int	test_isdigit(void)
{
	int passed = 0;
	char c = 0;

	while (c <= 126)
	{
		if (ft_isdigit(c) == isdigit(c))
			passed++;
		else
		{
			RED
			printf("ft_isdigit:\t\t\tERROR: ft_isdigit(c) != isdigit(c), %d %d %c\n", ft_isdigit(c), isdigit(c), c);
			CLEAR
		}
	c++;
	}

	if (passed == 127)
	{
		printf("ft_isdigit:\t\t\t");
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
