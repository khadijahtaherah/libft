/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:15:42 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:15:45 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_strmapi - Apply function 'f' to each char in string 's'
   @params      s: The string on which to iterate
                f: The function to apply to each character
   @brief       Applies the function f to each character of the string s, 
                passing its index as the first argument and the character itself 
                as the second. A new string is created (using malloc(3)) to 
                collect the results from the successive applications of f.
   @return      The string created from the successive applications of ’f’. 
                NULL if the allocation fails
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
