/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:16:03 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:16:06 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_striteri - Apply function 'f' to each char in string 's'
   @params      s: The string on which to iterate
                f: The function to apply to each character
   @brief       Applies the function ’f’ on each character of the string passed
                as argument, passing its index as first argument. Each char is 
                passed by address to ’f’ to be modified if necessary.
   @return      None
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
