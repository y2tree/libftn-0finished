/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little) // autres cas
		return (NULL);
	if (little[0] == '\0') // little vide
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	j = 0;
	
    while (i < len && big[i] != '\0')
    {
        j = 0;
        while (little[j])
	    {
		    if (big[i + j] != little[j])
                j++;
	    }
        i++;
        return ((char *)&big[i]);

        
    }	
    return NULL;
}

int main()
{
    printf("Test: '%s'\n", ft_strnstr("hello world", "wor", 15));
    return 0;
}