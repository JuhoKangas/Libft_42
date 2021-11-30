/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:04:07 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/30 17:56:29 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

static	void	toupper(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c -= 32;
}

int	test_striteri(void)
{
	int	passed = 0;
	size_t	i = 0;

	char str1[] = "abcdefghijklmnopqrstuvwxyz";
	char str2[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";

	printf("ft_striteri:\t\t\t");

	ft_striteri(str1, toupper);

	if (strcmp(str1, str2) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR: strcmp != 0 \n%s\n%s\n", str1, str2);
		CLEAR
	}
	
	if (passed == 1)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}

	return (0);
}
