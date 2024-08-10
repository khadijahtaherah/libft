/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:06:55 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 20:18:05 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memmove
 * @params		dest: dest obj, src: source obj, len: no of bytes to copy
 * @brief		Copies n bytes from src to dst. Copies data from src to temp
 * 				first, then to dst. This allows for src and dst to overlap,
 * 				prevent undefined behaviour.
 * @return		Returns the orginal value of dest
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	buffer = (char *)dest;
	if (dest < src)
	{
		while (n--)
			*buffer++ = *(char *)src++;
	}
	else
	{
		while (n--)
			buffer[n] = ((char *)src)[n];
	}
	return (dest);
}
