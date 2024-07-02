/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:22:05 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 22:45:36 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function  ft_strchr
 * @params		s: string given, c: character to search for
 * @brief		  Locate the first occurrence of c in the string pointed to by s
 * @return		A pointer to the first occurrence of c in the string s
 * 				    NULL if c is not found
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s || *s == c)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
  char buffer1[50] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  ptr = ft_strchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );

   return(0);
}*/