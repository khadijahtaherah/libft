/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:52:14 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 21:59:42 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memcmp
 * @params		s1: string 1, s2: string 2, n: no of bytes to compare
 * @brief		Compare the first n bytes of s1 and s2
 * @return		If s1 == s2, return ZERO. Otherwise return s1 - s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "abcDef", 6);

   ret = memcmp(str1, str2, 4);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
