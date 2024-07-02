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

	if (size != 0 && count > INT_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*
In C, when you perform an arithmetic operation that results in a value that is 
too large to be stored in the associated data type (in this case, an int), it 
results in a condition known as integer overflow. The behavior of an overflow 
is undefined in C, which means anything can happen; it might wrap around, it 
might crash, etc. So, if size * count exceeds INT_MAX, an overflow occurs 
before the comparison (size * count) > INT_MAX is made. This could lead to 
unpredictable behavior. To avoid this, we rearrange the equation to 
count > INT_MAX / size. This checks if count is greater than the maximum 
value an int can hold divided by size. If it is, that means multiplying count 
by size would result in an overflow, so we return NULL. This way, we prevent 
the overflow from happening in the first place.
*/