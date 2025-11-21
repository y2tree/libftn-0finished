/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microstrdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 13:24:35 by vasari            #+#    #+#             */
/*   Updated: 2025/11/21 13:24:35 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *c)
{
    size_t i;

    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(const char *s)
{
    size_t count  = ft_strlen(s);;
    size_t i = 0;
    // calcul la longuer de s

    char *nv_str = malloc((count + 1));
    if (!nv_str) // (!fonction issus de malloc) = malloc echoué
        return (NULL);
    
    while (i < count)
    {
        nv_str[i] = s[i];
        i++;
    }
    nv_str[count] = '\0';


    //copier s dans chaque zone
    retunr (nv_str);
}