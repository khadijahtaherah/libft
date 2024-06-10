/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:16:22 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/08 10:49:13 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memset
 * @params		b - string, c - character to fill, len - number of bytes
 * @brief		Writes len bytes of value c to the string b
 * @return		String b filled with len bytes of value c
 */
void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*buffer;
	int				i;

	buffer = b;
	i = 0;
	while (len--)
		buffer[i++] = (unsigned char)c;
	return (buffer);
}
