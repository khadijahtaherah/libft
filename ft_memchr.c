/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:19:01 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 20:50:34 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memchr
 * @params		s: string given, c: char to look for, n: no of bytes
 * @brief		Locate the first occurrence of c (unsigned char) in the first
 * 				n bytes in the string pointed by s
 * @return		A pointer to the matching byte or NULL if c does not occur
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)(s++) == (unsigned char)c)
			return ((char *)(--s));
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
char buffer[80];
    char* where;

    strcpy( buffer, "video x-rays" );

    where = (char *) ft_memchr( buffer, 'x', 6 );
    if( where == NULL ) {
        printf( "'x' not found\n" );
    } else {
        printf( "%s\n", where );
    }

    where = (char *) ft_memchr( buffer, 'r', 9 );
    if( where == NULL ) {
        printf( "'r' not found\n" );
    } else {
        printf( "%s\n", where );
    }

   return(0);
}*/
