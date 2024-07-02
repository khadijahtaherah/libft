/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 19:06:33 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/24 19:06:37 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_substr: extract substring from a string
 * @params      s: The origin str to create substr, start: The start index of
                substr in the origin str, len: Max length of the substr
 * @brief       Allocates (with malloc(3)) and returns a substr from the str s.
                The substr begins at index ’start’ and is of max size ’len’.
 * @return      The substr. NULL if allocation fails
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_memcpy(substring, s + start, len);
	substring[len] = '\0';
	return (substring);
}
/*
int main()
{
    char *s = "good morning";
    printf("%s", ft_substr(s, 5, 10));

    const char *originalString = "Hello, World!";

    // Test case 1: Extract substring starting from index 7 with length 5
    unsigned int start1 = 7;
    size_t len1 = 5;
    char *sub1 = ft_substr(originalString, start1, len1);
    if (sub1) {
        printf("Substring 1: %s\n", sub1);
        free(sub1); // Free memory allocated by ft_substr
    } else {
        fprintf(stderr, "Error: Substring 1 allocation failed.\n");
    }

    // Test case 2: Extract substring starting from index 0 with length 6
    unsigned int start2 = 0;
    size_t len2 = 6;
    char *sub2 = ft_substr(originalString, start2, len2);
    if (sub2) {
        printf("Substring 2: %s\n", sub2);
        free(sub2); // Free memory allocated by ft_substr
    } else {
        fprintf(stderr, "Error: Substring 2 allocation failed.\n");
    }
    return 0;
}*/
