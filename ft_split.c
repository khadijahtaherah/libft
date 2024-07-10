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

	element = get_element(s, c);
	array = malloc(element * sizeof(char *));
	if (!array)
		return (NULL);
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
