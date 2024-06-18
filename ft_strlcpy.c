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

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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

#include <stdio.h>
#include <string.h>

int main(void)
{
 

    return 0;
}