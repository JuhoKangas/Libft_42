/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:00:23 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/30 14:27:03 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

static	void	char_toupper(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

static	void	char_tolower(char *c)
{
	if (*c >= 65 && *c <= 90)
		*c += 32;
}

static	int	char_isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

static	int	char_islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int	test_striter(void)
{
	int	passed = 0;
	size_t i = 0;

	char lower_str[] = "ThisismostlyLowercase"; //21
	char upper_str[] = "THISISALLUPPERCASE"; //18

	printf("ft_striter:\t\t\t");

	ft_striter(lower_str, char_toupper);
	ft_striter(upper_str, char_tolower);

	while (lower_str[i] != '\0' && char_isupper(lower_str[i]))
	{
		passed++;
		i++;
	}

	i = 0;

	while (upper_str[i] != '\0' && char_islower(upper_str[i]))
	{
		passed++;
		i++;
	}

	if (passed == 39)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	else
	{
		RED
		printf("ERROR: \nThis should all be uppercase: %s\nThis should all be lowercase: %s\n", lower_str, upper_str);
		CLEAR
	}
	return (0);
}
