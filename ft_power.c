/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:52:07 by jkangas           #+#    #+#             */
/*   Updated: 2021/12/06 13:53:24 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int base, int power)
{
	int	res;

	res = 1;
	while (power > 0)
	{
		res *= base;
		power--;
	}
	return (res);
}
