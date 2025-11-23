/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/21 13:37:13 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = ft_strlen(src);
	if (size == 0)
		return (count);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

/*
#include <string.h>

int	main(void)
{
	char	dest1[20];
	size_t	result1;
	char	dest2[6];
	size_t	result2;
	char	dest3[10];
	size_t	result3;
	char	dest4[10] = "unchanged";
	size_t	result4;
	char	dest5[10];
	size_t	result5;
	char	dest6[6];
	size_t	result6;

	printf("=== Tests ft_strlcpy ===\n\n");
	// Test 1 : Copie normale (src plus courte que size)
	result1 = ft_strlcpy(dest1, "hello", 20);
	printf("Test 1 - src courte :\n");
	printf("  src = \"hello\"\n");
	printf("  dest = \"%s\"\n", dest1);
	printf("  return (= %zu (attendu: 5)\n\n", result1));
	// Test 2 : Troncature (src plus longue que size)
	result2 = ft_strlcpy(dest2, "hello world", 6);
	printf("Test 2 - troncature :\n");
	printf("  src = \"hello world\"\n");
	printf("  dest = \"%s\"\n", dest2);
	printf("  return (= %zu (attendu: 11)\n\n", result2));
	// Test 3 : String vide
	result3 = ft_strlcpy(dest3, "", 10);
	printf("Test 3 - string vide :\n");
	printf("  src = \"\"\n");
	printf("  dest = \"%s\"\n", dest3);
	printf("  return (= %zu (attendu: 0)\n\n", result3));
	// Test 4 : size = 0 (cas limite)
	result4 = ft_strlcpy(dest4, "hello", 0);
	printf("Test 4 - size = 0 :\n");
	printf("  src = \"hello\"\n");
	printf("  dest = \"%s\" (devrait rester unchanged)\n", dest4);
	printf("  return (= %zu (attendu: 5)\n\n", result4));
	// Test 5 : size = 1 (juste la place pour '\\0')
	result5 = ft_strlcpy(dest5, "hello", 1);
	printf("Test 5 - size = 1 :\n");
	printf("  src = \"hello\"\n");
	printf("  dest = \"%s\" (devrait être vide)\n", dest5);
	printf("  return (= %zu (attendu: 5)\n\n", result5));
	// Test 6 : Exactement la bonne taille
	result6 = ft_strlcpy(dest6, "hello", 6);
	printf("Test 6 - taille exacte :\n");
	printf("  src = \"hello\"\n");
	printf("  dest = \"%s\"\n", dest6);
	printf("  return (= %zu (attendu: 5)\n\n", result6));
	return (0);
}
*/
