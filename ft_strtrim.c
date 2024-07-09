/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:04:14 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:12:11 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_strtrim - trim set characters from main string
 * @params		s1: string to be trimmed, set: set of characters to trim
 * @brief		Allocates with malloc. Trim s1 with the characters specified in
 * 				'set' at the beginning and at the end of s1
 * @return		Trimmed copy of s1. NULL if memory allocation fails
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*ptr;
	char	*start;
	char	*end;

	start = (char *)s1;
	while (*start && isset(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end >= start && isset(set, *end))
		end--;
	trim = malloc((end - start + 2) * sizeof(char));
	if (!trim)
		return (NULL);
	ptr = trim;
	while (start <= end)
		*ptr++ = *start++;
	*ptr = '\0';
	return (trim);
}

int	isset(char const *set, int c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
/*
int main()
{
    char const *s1 = "aaababHello Abyss aabb";
    char const *set = "ab";
    char *res = ft_strtrim(s1, set);
    printf("%s\n", res);
    return (0);
}*/