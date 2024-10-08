/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:52:14 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 22:16:58 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memcmp
 * @params		s1: string 1, s2: string 2, n: no of bytes to compare
 * @brief		Compare the first n bytes of s1 and s2. Works on raw memory and
               does not stop when reach '\0'.
 * @return		If s1 == s2, return ZERO. Otherwise return s1 - s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1++ != *str2++)
			return (*--str1 - *--str2);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcDef", 6);
   memcpy(str2, "abcdef", 6);

   ret = ft_memcmp(str1, str2, 4);

   if(ret > 0) {
      printf("str2 is less than str1, ret: %d\n", ret);
   } else if(ret < 0) {
      printf("str1 is less than str2, ret: %d\n", ret);
   } else {
      printf("str1 is equal to str2, ret: %d\n", ret);
   }

   return(0);
}*/
