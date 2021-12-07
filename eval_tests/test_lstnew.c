/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:08:21 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/07 15:26:22 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

int	test_lstnew(void)
{
	int	passed = 0;
	char *data = "This is some data";
	t_list	*node = ft_lstnew(data, strlen(data) + 1);

	printf("ft_lstnew:\t\t\t");
	if (strcmp(node->content, data) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 1: strcmp ! = 0\n%s\n%s\n", data, node->content);
		CLEAR
	}
	free(node->content);
	free(node);

	if (passed == 1)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}

int	main(void)
{
	test_lstnew();
	return (0);
}
