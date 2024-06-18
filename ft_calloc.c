#include <stdlib.h>
#include "libft.h"

/* @function  ft_calloc
 * @params    nmemb: no of elements, size: size
 * @brief     Allocates  memory for an array of nmemb elements of size bytes each 
 * @return    Returns a pointer to the allocated memory. The memory is set to zero.
              If nmemb or size is 0, returns either NULL, or a unique pointer value 
              that can later be successfully passed	to free().
 */
void  *ft_calloc(size_t nmemb, size_t size)
{
  void  *ptr;

  ptr = malloc(sizeof(size) * nmemb);
  ft_memset(ptr, 0, sizeof(size) * nmemb);
  return (ptr);
}
