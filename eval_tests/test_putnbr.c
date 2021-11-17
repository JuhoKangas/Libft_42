/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:09:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/10 14:56:55 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int j = -5000;
	int k = 36034;
	int max = 2147483647;
	int min = -2147483648;

	ft_putnbr(i);
	printf("\n");
	ft_putnbr(j);
	printf("\n");
	ft_putnbr(k);
	printf("\n");
	ft_putnbr(min);
	printf("\n");
	ft_putnbr(max);
	printf("\n");
	return (0);
}
