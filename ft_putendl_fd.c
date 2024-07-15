#include "libft.h"

/* @function    ft_putendl_fd - 
   @params      s: The string to output
				fd: The file descriptor on which to write
   @brief       Outputs the string ’s’ to the given file descriptor
				followed by a newline
   @return		None
*/
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}