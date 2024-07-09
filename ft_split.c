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
 * @params		
 * @brief		Allocates with malloc.
 * @return		
 */
char	**ft_split(char const *s, char c)
{
	int 	size;
	char	**array;
	int		i;

	size = get_size(s, c);
	array = malloc(size * sizeof(char *));
	if (!array)
		return (NULL);

}

int	get_size(char const *s, char c)
{
	int	size;
	int	i;

	while (*s)
	{
		if (*s == c)
			size++;
			i = 0;
		s++;
	}
	size++;
	return (size);
}