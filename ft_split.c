/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:14:24 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:14:29 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_split - split string by delimiter c
 * @params		s: input string, c: delimiter
 * @brief		Allocates with malloc.
 * @return		array of splitted strings
 */
static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int	fill_array(char **split, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		len = word_len(s, c);
		split[i] = malloc(sizeof(char) * (len + 1));
		if (!split[i])
		{
			while (i > 0)
				free(split[--i]);
			free(split);
			return (0);
		}
		ft_memcpy(split[i], s, len);
		split[i++][len] = '\0';
		s += len;
	}
	split[i] = NULL;
	return (1);
}

// Main function to split the string
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	if (!fill_array(split, s, c))
		return (NULL);
	return (split);
}
/*
#include <stdio.h>

int main()
{
	const char *s = "@hel@@bye@ok";
	char c = '@';

	printf("size = %d\n", word_count(s, c));
	return 0;
}*/