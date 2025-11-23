/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/21 13:37:13 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char	str1[20] = "hello";
	char	dest1[20];
	char	str2[20] = "hello world";
	char	str3[20] = "hello world";
	char	str4[20] = "test";
	char	str5[20] = "zero";

	// Test 1 : Pas d'overlap
	mini_memmove(dest1, str1, 6);
	printf("Test 1 : %s\n", dest1);  // "hello"
	// Test 2 : Overlap vers la droite (d > s)
	mini_memmove(str2 + 2, str2, 5);
	printf("Test 2 : %s\n", str2);  // "hehello rld"
	// Test 3 : Overlap vers la gauche (d < s)
	mini_memmove(str3, str3 + 2, 5);
	printf("Test 3 : %s\n", str3);  // "llo world"
	// Test 4 : dest == src
	mini_memmove(str4, str4, 4);
	printf("Test 4 : %s\n", str4);  // "test" (inchangé)
	// Test 5 : n = 0
	mini_memmove(str5, "xxx", 0);
	printf("Test 5 : %s\n", str5);  // "zero" (inchangé)
	return (0);
}
*/