/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	size_t	count;
	size_t	i;
	char	*nv_str;

	count = ft_strlen(s);
	i = 0;
	nv_str = malloc(count + 1);
	if (!nv_str)
		return (NULL);
	while (i < count)
	{
		nv_str[i] = s[i];
		i++;
	}
	nv_str[count] = '\0';
	return (nv_str);
}

// #include <stdio.h>
// #include <stdlib.h>

// char    *ft_strdup(const char *s); // déclarer fonction

// int main(void)
// {
//     char *src = "Hello 42 !";
//     char *dup = ft_strdup(src);

//     if (!dup)
//     {
//         printf("Erreur : ft_strdup a renvoyé NULL\n");
//         return (1);
//     }

//     printf("Original : %s\n", src);
//     printf("Copie    : %s\n", dup);

//     free(dup); // a pas oublier
//     return (0);
// }
