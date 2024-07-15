
#include "libft.h"

/* @function    ft_putnbr_fd
   @params		n: The integer to output.
				fd: The file descriptor on which to write
   @brief		Outputs the integer ’n’ to the given file descriptor
   @return      None
*/
void ft_putnbr_fd(int n, int fd)
{
	char	*num;
	long	nbl;

	num = "0123456789";
	nbl = (long)n;
	if (nbl < 0)
	{
		write(fd, "-", 1);
		nbl = -nbl;
	}
	if (nbl > 9)
		ft_putnbr_fd(nbl / 10, fd);
	write(fd, &num[nbl % 10], 1);
}

/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	return (0);
}*/