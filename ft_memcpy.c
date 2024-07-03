/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:25:02 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 18:40:04 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_memcpy
 * @params		dest: dest obj, src: source object, len: no of bytes to copy
 * @brief		Copies n bytes from src to dest. If dest and src overlap,
 * 				behaviour is undefined. The memory areas should not overlap, 
 				and the function does not stop if it encounters a null char.
				It's often used for copying arrays or structures.
 * @return		Returns the original value of dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer;

	buffer = (char *)dest;
	while (n--)
		*buffer++ = *(char *)src++;
	return (dest);
}
