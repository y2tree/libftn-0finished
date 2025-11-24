/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:24:49 by vasari            #+#    #+#             */
/*   Updated: 2025/11/24 09:52:40 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int	get_number_length(int n)
{
	int	len;

	len = 0;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

static void	write_number_to_string(char *result, int n, int pos)
{
	while (n > 0)
	{
		result[pos] = (n % 10) + '0';
		pos--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		is_negative;
	int		len;
	char	*result;
	int		pos;

	is_negative = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	len = get_number_length(n);
	result = malloc(len + is_negative + 1);
	if (!result)
		return (NULL);
	pos = len + is_negative - 1;
	result[pos + 1] = '\0';
	write_number_to_string(result, n, pos);
	if (is_negative)
		result[0] = '-';
	return (result);
}

// int	main(void)
// {
// 	printf("Test 1: '%s'\n", ft_itoa(123));
// 	printf("Test 2: '%s'\n", ft_itoa(-42));
// 	printf("Test 3: '%s'\n", ft_itoa(0));
// 	return (0);
// }