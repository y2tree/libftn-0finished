/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:56:41 by vasari            #+#    #+#             */
/*   Updated: 2025/11/23 16:31:11 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				result;
	int				sign;

	sign = 1;
	i = 0;
	result = 0;
	// gerer les espaces
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
		// printf("%d\n", i);
		// printf("nptr[i] = %c\n", nptr[i]);
	}
	if (nptr[i] == '+')
	{
		i++;
		// printf("%d\n", i);
	}
	else if (nptr[i] == '-')
	{
		sign = sign * -1;
		i++;
		// printf("%d\n", i);
		// printf("sign = %d\n", sign);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		// printf("result = %d\n", result);
		result = result * 10 + (nptr[i] - '0');
		i++;
		// printf("%d\n", i);
		// printf("result = %d\n", result);
	}
	return (result * sign);
}

// #include <stdio.h>

// // Ton ft_atoi ici

// int main()
// {
//     printf("Test 1: %d\n", ft_atoi("123"));
//     printf("Test 2: %d\n", ft_atoi("-42"));
//     printf("Test 3: %d\n", ft_atoi("   +17"));
//     printf("Test 4: %d\n", ft_atoi("42abc"));
//     return (0);
// }
