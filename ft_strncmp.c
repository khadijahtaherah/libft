/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 20:52:00 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/14 20:52:18 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_strncmp
 * @params		s1: string 1, s2: string 2; n: no of bytes
 * @brief		Compare s1 and s2 up until n characters
 * return		Return difference between s1 and s2.
 				Return 0 if s1 and s2 matches.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {

	char str1[15];
   	char str2[15];
   	int ret;

   	strcpy(str1, "abcdef");
   	strcpy(str2, "ABCDEF");

   	ret = ft_strncmp(str1, str2, 4);

   	if(ret < 0) {
      	printf("str1 is less than str2");
   	} else if(ret > 0) {
      	printf("str2 is less than str1");
   	} else {
      	printf("str1 is equal to str2");
   	}	
   
   	return(0);
}
*/