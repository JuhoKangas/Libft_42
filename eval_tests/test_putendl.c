/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:33:50 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/08 15:39:33 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char *str1 = "Testing line\n";
	char *str2 = "\t";
	char *str3 = "";

	ft_putendl(str1);
	ft_putendl(str2);
	ft_putendl(str3);
}
