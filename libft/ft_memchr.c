/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *mini_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str = (unsigned char *)s;
    unsigned char a = (unsigned char)c;

    size_t i = 0;
    while (i < n)
    {
        if (str[i] == a)
            return (void *)&str[i];
        i++;
    }
    return (NULL);
}

int main()
{
    char str[] = "hello word";

    char *result = mini_memchr(str, 'w', 11);

    if (result)
        printf("Trouve : %s\n", result);
    else
        printf("Pas trouvé\n");
    
    return 0;
}
