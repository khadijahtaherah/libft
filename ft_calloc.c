/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:56:07 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/18 20:56:20 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/* @function	ft_calloc
 * @params    	count: no of elements to allocate, size: size of each element
 * @brief     	Allocates  memory for an array of count elements of size bytes
 				each 
 * @return    	Returns a pointer to the allocated memory. The memory is set to
 				zero. If nmemb or size is 0, returns either NULL, or a unique 
				pointer value that can later be successfully passed	to free().
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
