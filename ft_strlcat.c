/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:09:11 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/18 21:09:29 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strlcat - Both src and dest must be null-terminated str.
 * @params      dest: dest str, src: src str, dstsize: length of dest string
 * @brief       Append src to end of dest string, at most dstsize - 1 (for null
 *              char). Then null is added, unless dstsize is 0 or dst > dstzise
 *              (which should not happen in practice).
 * @return      The total length of dest+src (not counting null terminator).
 *              If return value >= dstsize, the resulted string has been 
 *              truncated.
 */
size_t  ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t  src_len;
    size_t  dest_len;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);

    if (dest_len >= dstsize)
        dest_len = dstsize;
    if (dest_len == dstsize)
        return (dstsize + src_len);
    if (src_len < dstsize - dest_len)
        ft_memcpy(dest + dest_len, (char *)src, src_len + 1);
    else
    {
        ft_memcpy(dest + dest_len, (char *)src, dstsize - dest_len - 1);
        dest[dstsize - 1] = '\0';
    }

    return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    
    // Test case 1: Normal operation
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated string: %s\n", dest);
    printf("Return value: %zu\n", result);  // Should be length of concatenated string

    // Test case 2: Buffer is just big enough
    char small_dest[14] = "Hello, ";
    size_t result_small = ft_strlcat(small_dest, src, sizeof(small_dest));
    printf("Concatenated string (small buffer): %s\n", small_dest);
    printf("Return value (small buffer): %zu\n", result_small);  // Should be length of concatenated string

    // Test case 3: Destination buffer is too small
    char tiny_dest[7] = "Hello, ";
    size_t result_tiny = ft_strlcat(tiny_dest, src, sizeof(tiny_dest));
    printf("Concatenated string (tiny buffer): %s\n", tiny_dest);
    printf("Return value (tiny buffer): %zu\n", result_tiny);  // Should be length of concatenated string

    return 0;
}*/
