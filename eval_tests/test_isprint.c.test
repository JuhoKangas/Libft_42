/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:54:18 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/15 13:46:21 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "test_libft.h"
#include "../libft.h"

int	test_isprint(void)
{
	int passed = 0;
	char c = 0;

	while (c <= 126)
	{
		if (ft_isprint(c) == isprint(c))
			passed++;
		else
		{
			RED
			printf("ft_isprint:\t\t\tERROR: ft_isprint(c) != isprint(c), %d %d %c\n", ft_isprint(c), isprint(c), c);
			CLEAR
		}
	c++;
	}

	if (passed == 127)
	{
		printf("ft_isprint:\t\t\t");
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
