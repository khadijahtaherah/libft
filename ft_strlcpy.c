/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:08:21 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/18 21:08:42 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strlcat
 * @params      dest: dest str, src: source str, dstsize:
 * @brief             
 * @return      
 */
/*
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

size_t  ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t  src_len;
    size_t  len;

    src_len = ft_strlen(src);
    if  (src_len + 1 < dstsize)
    {
        while (*src)
            *dest++ = *(char *)src++;
    }
    else if (src_len + 1 >= dstsize && dstsize != 0)
    {
        len = dstsize - 1;
        while (len--)
            *dest++ = *(char *)src++;
    }
    *dest = '\0';
    return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];  // Destination buffer

    // Test case 1: Normal operation
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);
    printf("Return value: %zu\n", result);  // Should be length of src

    // Test case 2: Buffer is just big enough
    char small_dest[14];  // Size is exactly strlen(src) + 1
    size_t result_small = ft_strlcpy(small_dest, src, sizeof(small_dest));
    printf("Copied string (small buffer): %s\n", small_dest);
    printf("Return value (small buffer): %zu\n", result_small);  // Should be length of src

    // Test case 3: Destination buffer is too small
    char tiny_dest[5];  // Size is smaller than strlen(src) + 1
    size_t result_tiny = ft_strlcpy(tiny_dest, src, sizeof(tiny_dest));
    printf("Copied string (tiny buffer): %s\n", tiny_dest);
    printf("Return value (tiny buffer): %zu\n", result_tiny);  // Should be length of src

    return 0;
}*/