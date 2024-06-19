/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:59:09 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/19 20:59:26 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strdup - save a copy of string
 * @params      s1: original string
 * @brief       Allocates sufficient memory for a copy of s1. Does the copy.
 *              The difference with strcpy is that strdup allocates memory for
 *              the copied string.
 * @return      Return a pointer to the copy. The pointer may subsequently be 
 *              used as an argument to the function free(3). If insufficient 
 *              memory, NULL is returned and errno is set to ENOMEM.
 */
char    *ft_strdup(const char *s1)
{
    size_t  len;
    char *copy;
    
    len = ft_strlen(s1) + 1;
    copy = malloc(sizeof(char) * len);
    if (copy == NULL)
        return NULL;
    return ((char *)ft_memcpy(copy, (char *)s1, len));
}

/*
int main()
{
    const char *original = "Hello, world!";
    char *duplicate;

    duplicate = ft_strdup(original);
    if (duplicate != NULL) {
        printf("Original string: %s\n", original);
        printf("Duplicate string: %s\n", duplicate);
        free(duplicate);  // Remember to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
