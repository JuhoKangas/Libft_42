/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:08:21 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/07 18:09:49 by jkangas          ###   ########.fr       */
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

	if (node->next == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 2: Node->next is not set to NULL\n");
		CLEAR
	}
	free(node->content);
	free(node);

	node = ft_lstnew(NULL, 10);

	if (node->content == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 3: node->content != NULL");
		CLEAR
	}

	if (node->next == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 4: Node->next is not set to NULL\n");
		CLEAR
	}

	if (node->content_size == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 5: Node->content_size is not set to 0\n");
		CLEAR
	}

	free(node);

	node = ft_lstnew("", 1);

	if (memcmp(node->content, "", 1) == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 6: node->content != '\\0'\n");
		CLEAR
	}

	if (node->next == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 7: Node->next is not set to NULL\n");
		CLEAR
	}

	if (node->content_size == 1)
		passed++;
	else
	{
		RED
		printf("ERROR 8: Node->content_size is not set to 0\n");
		CLEAR
	}
	free(node->content);
	free(node);

	node = ft_lstnew("don't add this", 0);

	if (node->content == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 9: node->content != NULL");
		CLEAR
	}

	if (node->next == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR 10: Node->next is not set to NULL\n");
		CLEAR
	}

	if (node->content_size == 0)
		passed++;
	else
	{
		RED
		printf("ERROR 11: Node->content_size is not set to 0\n");
		CLEAR
	}

	if (passed == 11)
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
