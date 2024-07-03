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

/* @function	ft_strtrim - trim set characters from main string
 * @params		s1: string to be trimmed, set: set of characters to trim
 * @brief		Allocates with malloc. Trim s1 with the characters specified in
 * 				'set' at the beginning and at the end of s1
 * @return		Trimmed copy of s1. NULL if memory allocation fails
 */
char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    char    *ptr;
    int        i;
    
    trim = malloc((strlen(s1) + 1) * sizeof(char));
    if (!trim)
        return (NULL);
    strcpy(trim, s1);
    while (isset(set, *trim))
        trim++;
    ptr = trim;
    i = strlen(trim) - 1;
    trim = trim + i;
    while (isset(set, *trim))
    {
        trim--;
        i--;
    }
    trim++;
    *trim = '\0';
    return (ptr);
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