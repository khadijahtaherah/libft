/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:03:27 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/14 19:04:48 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_strnstr
 * @params		haystack: Main string, needle: String to search, len: no bytes
 * @brief		Locate first occurrence of the null-terminated needle in the 
 				haystack, not more than len characters are searched. 
				Characters that appear after '\0' are not searched.
 * @return		If needle == "", return haystack. 
 				If needle are not found, return NULL. If needle is found, 
				return pointer to the first occurrence of char of needle.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*start;
	const char	*temp;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			start = (char *)haystack;
			temp = haystack;
			while (*temp == *needle && len)
			{
				temp++;
				needle++;
				len--;
				if (*needle == '\0')
					return (start);
			}
			needle -= temp - start;
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char haystack[] = "hello world";
    char needle[] = "world";
    size_t len = strlen(haystack); // Get the length of haystack
    
    // Test 1: Search for "world" within "hello world"
    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Found '%s' in '%s'\n", needle, haystack);
    } else {
        printf("Test 1 failed. '%s' not found in '%s'\n", needle, haystack);
    }

    // Test 2: Search for "world" within "hello"
    char haystack2[] = "hello";
    len = strlen(haystack2); // Get the length of haystack2
    result = ft_strnstr(haystack2, needle, len);
    if (result == NULL) {
        printf("Test 2 passed. '%s' not found in '%s'\n", needle, haystack2);
    } else {
        printf("Unexpected result: '%s' found in '%s'\n", needle, haystack2);
    }

    return 0;
}*/
