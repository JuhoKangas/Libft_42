/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:29:30 by jkangas           #+#    #+#             */
/*   Updated: 2021/11/19 17:13:54 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include <stdlib.h>
#include "../libft.h"

int test_atoi(void)
{
	int	passed = 0;

	char *str1 = "\n\r\v\t\f 123456hello";
	char *str2 = "10000abcd";
	char *str3 = "asd7483647";
	char *str4 = "-2147483648";
	char *str5 = "--42";
	char *str6 = "++42";
	char *str7 = "2147483647";
	char *str8 = "2147483648";
	char *str9 = "-2147483649";
	char *str10 = "";
	char *str11 = "+-123";
	char *str12 = "-+123";
	char *str13 = "42school42";
	char *str14 = "school42school";

	printf("ft_atoi:\t\t\t");
	if (ft_atoi(str1) == atoi(str1))
		passed++;
	else
	{
		RED
		printf("ERROR 1: ft_atoi(str1) != atoi(str1):\n%d\n%d\n", ft_atoi(str1), atoi(str1));
		CLEAR
	}

	if (ft_atoi(str2) == atoi(str2))
		passed++;
	else
	{
		RED
		printf("ERROR 2: ft_atoi(str2) != atoi(str2):\n%d\n%d\n", ft_atoi(str2), atoi(str2));
		CLEAR
	}

	if (ft_atoi(str3) == atoi(str3))
		passed++;
	else
	{
		RED
		printf("ERROR 3: ft_atoi(str3) != atoi(str3):\n%d\n%d\n", ft_atoi(str3), atoi(str3));
		CLEAR
	}
	
	if (ft_atoi(str4) == atoi(str4))
		passed++;
	else
	{
		RED
		printf("ERROR 4: ft_atoi(str4) != atoi(str4):\n%d\n%d\n", ft_atoi(str4), atoi(str4));
		CLEAR
	}

	if (ft_atoi(str5) == atoi(str5))
		passed++;
	else
	{
		RED
		printf("ERROR 5: ft_atoi(str5) != atoi(str5):\n%d\n%d\n", ft_atoi(str5), atoi(str5));
		CLEAR
	}

	if (ft_atoi(str6) == atoi(str6))
		passed++;
	else
	{
		RED
		printf("ERROR 6: ft_atoi(str6) != atoi(str6):\n%d\n%d\n", ft_atoi(str6), atoi(str6));
		CLEAR
	}

	if (ft_atoi(str7) == atoi(str7))
		passed++;
	else
	{
		RED
		printf("ERROR 7: ft_atoi(str7) != atoi(str7):\n%d\n%d\n", ft_atoi(str7), atoi(str7));
		CLEAR
	}

	if (ft_atoi(str8) == atoi(str8))
		passed++;
	else
	{
		RED
		printf("ERROR 8: ft_atoi(str8) != atoi(str8):\n%d\n%d\n", ft_atoi(str8), atoi(str8));
		CLEAR
	}

	if (ft_atoi(str9) == atoi(str9))
		passed++;
	else
	{
		RED
		printf("ERROR 9: ft_atoi(str9) != atoi(str9):\n%d\n%d\n", ft_atoi(str9), atoi(str9));
		CLEAR
	}

	if (ft_atoi(str10) == atoi(str10))
		passed++;
	else
	{
		RED
		printf("ERROR 10: ft_atoi(str10) != atoi(str10):\n%d\n%d\n", ft_atoi(str10), atoi(str10));
		CLEAR
	}

	if (ft_atoi(str11) == atoi(str11))
		passed++;
	else
	{
		RED
		printf("ERROR 11: ft_atoi(str11) != atoi(str11):\n%d\n%d\n", ft_atoi(str11), atoi(str11));
		CLEAR
	}
	
	if (ft_atoi(str12) == atoi(str12))
		passed++;
	else
	{
		RED
		printf("ERROR 12: ft_atoi(str12) != atoi(str12):\n%d\n%d\n", ft_atoi(str12), atoi(str12));
		CLEAR
	}

	if (ft_atoi(str13) == atoi(str13))
		passed++;
	else
	{
		RED
		printf("ERROR 13: ft_atoi(str13) != atoi(str13):\n%d\n%d\n", ft_atoi(str13), atoi(str13));
		CLEAR
	}

	if (ft_atoi(str14) == atoi(str14))
		passed++;
	else
	{
		RED
		printf("ERROR 14: ft_atoi(str14) != atoi(str14):\n%d\n%d\n", ft_atoi(str14), atoi(str14));
		CLEAR
	}

	if (passed == 14)
	{
		GREEN
		printf("OK\n");
		CLEAR
		return (1);
	}
	return (0);
}
