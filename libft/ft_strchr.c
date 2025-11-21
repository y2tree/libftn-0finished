/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	// const char *str = (const char *)s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char *result = ft_strchr("helslo", 'l');
// 	printf("Test 1 : %s\n", result);

// 	result = ft_strchr("hello", 'l');
// 	if (result)
// 		printf("Test 2 : Trouvé\n");
// 	else
// 		printf("Test 2 : Pas trouvé\n");

// 	result = ft_strchr("abc", 'a');
// 	printf("test 4 : %s\n", result);

// 	return (0);
// }