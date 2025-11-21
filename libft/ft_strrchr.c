/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	const char	*str = (const char *)s;
	size_t		count;
	size_t		i;

	count = ft_strlen(str);
	for (i = count; i > 0; i--)
	{
		if (str[i - 1] == (char)c)
		{
			return ((char *)&str[i - 1]);
		}
	}
	if (str[count] == (char)c)
		return ((char *)&str[count]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("=== Test ft_strrchr ===\n");

// 	// Test 1 : Plusieurs occurrences
// 	char *str1 = "hello world";
// 	char *result1 = ft_strrchr(str1, 'l');
// 	char *expected1 = strrchr(str1, 'l'); // Vraie fonction

// 	printf("Test 1 - Cherche 'l' dans \"%s\":\n", str1);
// 	printf("  ft_strrchr : %s\n", result1 ? result1 : "NULL");
// 	printf("  strrchr    : %s\n", expected1 ? expected1 : "NULL");
// 	printf("  %s\n\n", (result1 == expected1) ? "✅ OK" : "❌ KO");

// 	// Test 2 : Pas trouvé
// 	char *result2 = ft_strrchr(str1, 'z');
// 	char *expected2 = strrchr(str1, 'z');

// 	printf("Test 2 - Cherche 'z' dans \"%s\":\n", str1);
// 	printf("  ft_strrchr : %s\n", result2 ? result2 : "NULL");
// 	printf("  strrchr    : %s\n", expected2 ? expected2 : "NULL");
// 	printf("  %s\n\n", (result2 == expected2) ? "✅ OK" : "❌ KO");

// 	// Test 3 : Chercher '\0'
// 	char *result3 = ft_strrchr(str1, '\0');
// 	char *expected3 = strrchr(str1, '\0');

// 	printf("Test 3 - Cherche '\\0' dans \"%s\":\n", str1);
// 	printf("  ft_strrchr : %s\n", result3 ? "Trouvé \\0" : "NULL");
// 	printf("  strrchr    : %s\n", expected3 ? "Trouvé \\0" : "NULL");
// 	printf("  %s\n\n", (result3 == expected3) ? "✅ OK" : "❌ KO");

// 	// Test 4 : Premier et dernier caractère
// 	char *result4 = ft_strrchr(str1, 'h');
// 	char *expected4 = strrchr(str1, 'h');

// 	printf("Test 4 - Cherche 'h' dans \"%s\":\n", str1);
// 	printf("  ft_strrchr : %s\n", result4 ? result4 : "NULL");
// 	printf("  strrchr    : %s\n", expected4 ? expected4 : "NULL");
// 	printf("  %s\n", (result4 == expected4) ? "✅ OK" : "❌ KO");

// 	return (0);
// }