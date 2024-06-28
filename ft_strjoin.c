/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:20:17 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 20:39:22 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_strjoin - Concatenate two strings
 * @params		s1: Prefix string, s2: Suffix string
 * @brief		Allocates with malloc. Concatenate s1 and s2
 * @return		The resulting string of s1 and s2 concatenation
 * 				NULL if allocation fails
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
