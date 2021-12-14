/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:43:16 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/10 13:39:26 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	test_strdup(void)
{
	char *str1 = "Hello world";
	char *empty = "";
	char *str_dup1;
	char *str_dup2;
	char *str_dup3;
	char *str_dup4;

	str_dup1 = ft_strdup(str1);
	str_dup2 = strdup(str1);
	str_dup3 = ft_strdup(empty);
	str_dup4 = strdup(empty);

	if (strcmp(str_dup1, str_dup2) == 0 && strcmp(str_dup3, str_dup4) == 0) 
	{
		printf("ft_strdup:			");
		printf("\033[1;32m");
		printf("OK\n");
		printf("\033[0m");
		return (1);
	}
	else
	{
		printf("ft_strdup:			");
		printf("\033[1;31m");
		printf("ERROR\n");
		printf("\033[0m");
		return (0);
	}
}
