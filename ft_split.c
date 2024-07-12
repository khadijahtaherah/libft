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

int	get_element(char const *s, char c);

/* @function	ft_split - split string by delimiter c
 * @params		
 * @brief		Allocates with malloc.
 * @return		\
 */
char	**ft_split(char const *s, char c)
{
	int		element;
	char	**array;
	char	*buffer

	buffer = malloc((strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	strcpy(buffer, s)

	element = get_element(s, c);
	array = malloc(element * sizeof(char *));
	if (!array)
		return (NULL);
	setsize(buffer, array, c, element);
	free(buffer);
	return (array);
}

int	get_element(char const *s, char c)
{
	int	element;

	element = 0;
	while (*s)
	{
		if (*s == c)
			element++;
		s++;
	}
	element++;
	return (element);
}

void	setsize(char *s, char **array, char c, int element)
{
	int start;
	int end;
	int size;
	int	i;

	start = 0;
	end = 0;
	i = 0;
	while (i < element)
	{
		while (*s != c && *s)
		{
			end++;
			s++;
		}
		size = end - start + 1;
		array[i] = malloc(size * sizeof(char));
		if (!array[i])
			return (NULL);
		i++;
		end++; //skip c
		s++; //skip c
		start = end;
	}
}
