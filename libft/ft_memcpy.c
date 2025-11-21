/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src1[] = "bonjour";
	char	dest1[20];
	int		src2[3] = {100, 200, 300};
	int		dest2[3];

	// Test 1 : Copier une string
	ft_memcpy(dest1, src1, 8);
	printf("Test 1 : %s\n", dest1);
	// Test 2 : Copier des int
	ft_memcpy(dest2, src2, sizeof(src2));
	printf("Test 2 : %d, %d, %d\n", dest2[0], dest2[1], dest2[2]);
	return (0);
}
*/