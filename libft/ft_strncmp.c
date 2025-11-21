/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     // Test 1 : Identiques
//     printf("%d\n", ft_strncmp("hello", "hello", 5));  // 0

//     // Test 2 : Différents
//     printf("%d\n", ft_strncmp("abc", "abd", 3));  // < 0

//     // Test 3 : String plus courte
//     printf("%d\n", ft_strncmp("hello", "hello world", 10));  // < 0

//     // Test 4 : n = 0
//     printf("%d\n", ft_strncmp("abc", "xyz", 0));  // 0

//     return (0);
// }
