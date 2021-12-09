/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:52:08 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/10 13:39:43 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "../libft.h"

int	test_strlen(void)
{
	char *str1 = "Hello World";
	char *str2 = "";
	char *str3 = "Hello\t\t\t\n\0 World";
	char *str4 = "Now I will tell you the answer to my question. It is this. The Party seeks power entirely for its own sake. We are not interested in the good of others; we are interested solely in power, pure power. What pure power means you will understand presently. We are different from the oligarchies of the past in that we know what we are doing. All the others, even those who resembled ourselves, were cowards and hypocrites. The German Nazis and the Russian Communists came very close to us in their methods, but they never had the courage to recognize their own motives. They pretended, perhaps they even believed, that they had seized power unwillingly and for a limited time, and that just around the corner there lay a paradise where human beings would be free and equal. We are not like that. We know that no one ever seizes power with the intention of relinquishing it. Power is not a means; it is an end. One does not establish a dictatorship in order to safeguard a revolution; one makes the revolution in order to establish the dictatorship. The object of persecution is persecution. The object of torture is torture. The object of power is power. Now you begin to understand me.";

	if (ft_strlen(str1) == strlen(str1) && ft_strlen(str2) == strlen(str2) && ft_strlen(str3) == strlen(str3) && ft_strlen(str4) == strlen(str4))
	{
		printf("ft_strlen:			");
		printf("\033[1;32m");
		printf("OK\n");
		printf("\033[0m");
		return (1);
	}
	else
	{
		printf("ft_strlen:			");
		printf("\033[1;31m");
		printf("ERROR\n");
		printf("\033[0m");
		return (0);
	}
}
