/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:08:21 by skhairul          #+#    #+#             */
/*   Updated: 2024/07/01 19:23:57 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strlcpy - size-bounded string copying
 * @params      dest: dest str, src: source str, dstsize:
 * @brief       Copies src into dest not more then size - 1, leaving room for
                null-terminator. Ensure there will be no overflow. It will copy
                as much as it can (depend on dstsize), then null-terminated the
                string.      
 * @return      Returns the length of the source string. Can be used to check
                if the entire string was copied. If the return value is greater
                than or equal to the size parameter, the src str was truncated.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
	{
		while (*src)
			*dest++ = *(char *)src++;
		*dest = '\0';
	}
	else if (dstsize != 0)
	{
		len = dstsize - 1;
		while (len--)
			*dest++ = *(char *)src++;
		*dest = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[10] = "AAAAAAAAAA"; // Destination buffer

    // Test case 1: Normal operation
    size_t result = ft_strlcpy(dest, src, 0);
    printf("Copied string: %s\n", dest);
    printf("Return value: %zu\n", result);  // Should be length of src

    // Test case 2: Buffer is just big enough
    char small_dest[14];  // Size is exactly strlen(src) + 1
    size_t result_small = ft_strlcpy(small_dest, src, sizeof(small_dest));
    printf("Copied string (small buffer): %s\n", small_dest);
    printf("Return value (small buffer): %zu\n", result_small);  

    // Test case 3: Destination buffer is too small
    char tiny_dest[5];  // Size is smaller than strlen(src) + 1
    size_t result_tiny = ft_strlcpy(tiny_dest, src, 9);
    printf("Copied string (tiny buffer): %s\n", tiny_dest);
    printf("Return value (tiny buffer): %zu\n", result_tiny);  

    return 0;
}*/
