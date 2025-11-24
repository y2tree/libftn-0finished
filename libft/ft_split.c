/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasari <vasari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:27:00 by vasari            #+#    #+#             */
/*   Updated: 2025/11/24 13:25:00 by vasari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*free_all(char **arr, size_t n)
{
	while (n > 0)
	{
		free(arr[n - 1]);
		n--;
	}
	free(arr);
	return (NULL);
}

static char	*next_word(char const **s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	while (**s && **s == c)
		(*s)++;
	if (**s == '\0')
		return (NULL);
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = (*s)[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**arr;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		arr[i] = next_word(&s, c);
		if (!arr[i])
			return ((char **)free_all(arr, i));
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
