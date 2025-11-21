/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: student <student@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:00:00 by student           #+#    #+#             */
/*   Updated: 2025/11/05 00:00:00 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32); // Comment convertir ?
	else
		return (c); // Que retourner sinon ?
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('h'));
// 	printf("%c\n", ft_toupper('3'));
// 	printf("%c\n", ft_toupper('s'));
// 	printf("%c\n", ft_toupper('D'));

// 	return (0);
// }