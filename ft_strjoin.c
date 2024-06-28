/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:20:17 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 20:51:02 by skhairul         ###   ########.fr       */
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
	char	*temp;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	temp = result;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (result);
}
