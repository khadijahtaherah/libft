#include <stdlib.h>
#include "libft.h"

/* @function  ft_calloc
 * @params    count: no of elements to allocate, size: size of each element
 * @brief     Allocates  memory for an array of nmemb elements of size bytes each 
 * @return    Returns a pointer to the allocated memory. The memory is set to zero.
              If nmemb or size is 0, returns either NULL, or a unique pointer value 
              that can later be successfully passed	to free().
 */
void  *ft_calloc(size_t count, size_t size)
{
  void  *ptr;

  if (!(ptr = malloc(count * size)))
    return (NULL);
  ft_memset(ptr, 0, count * size);
  return (ptr);
}
