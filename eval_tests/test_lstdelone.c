/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:24:15 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/07 18:36:40 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"
#include <stdlib.h>

static void ft_del1(void *content, size_t size)
{
	if (size != 0)
		free(content);
}

int	test_lstdelone(void)
{
	int passed = 0;

	int		content[] = {1, 2, 3, 4, 5};
	t_list	*new = ft_lstnew(content, sizeof(int)*5);
	t_list	*next = ft_lstnew("42", sizeof(char)*3);

	new->next = next;

	ft_lstdelone(&new, ft_del1);

	printf("ft_lstdelone:\t\t\t");
	if (new == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: new != NULL\n");
		CLEAR
	}

	if (next != NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: next == NULL\n");
		CLEAR
	}

	ft_lstdelone(&next, ft_del1);

	if (next == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: next != NULL\n");
		CLEAR
	}

	new = ft_lstnew("", 0);
	ft_lstdelone(&new, ft_del1);

	if (new == NULL)
		passed++;
	else
	{
		RED
		printf("ERROR: new != NULL\n");
		CLEAR
	}

	if (passed == 4)
	{
		GREEN
		printf("OK, check for memory leaks\n");
		CLEAR
		return (1);
	}
	return (0);
}
