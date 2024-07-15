
#include "libft.h"

/* @function    ft_putstr_fd - Put str to the file descriptor
   @params      s: The string to output
                fd: The file descriptor on which to write
   @brief       Outputs the string ’s’ to the given file descriptor
   @return      None    
*/
void ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}
/*
int main()
{
    char *s = "hello";
    ft_putstr_fd(s, 1);
}*/