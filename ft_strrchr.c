/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:19:51 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/14 18:19:53 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strrchr
 * @params      s: string given, c: character to look for
 * @brief       Find the last occurrence of c in s. Stop searching when reach
				'\0'.
 * @return      A pointer to the first occurrence of c in the string s
 * 				NULL if c is not found
 */
char	*ft_strrchr(char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_c = s;
		s++;
	}
	if ((char)c == *s)
		return (s);
	return (last_c);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
  char buffer1[50] = "computer program";
  char *ptr;
  int    ch = 'p';
 
  ptr = ft_strrchr( buffer1, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );

   return(0);
}*/