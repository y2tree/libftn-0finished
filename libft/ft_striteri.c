/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 20:01:12 by vasari            #+#    #+#             */
/*   Updated: 2025/11/21 20:13:54 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    // 1. Vérification s et f
    if (!s || !f)
        return;
    // 2. Boucle sur chaque caractère
    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }    
    // 3. Pas de return (void)
}