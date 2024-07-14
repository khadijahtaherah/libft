/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:14:49 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:14:55 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* @function	ft_itoa - Convert integer to string
   @params		n: the integer to convert
   @brief		Allocates with malloc. Returns a string representing the int.
				Negative numbers must be handled.
   @return		Returns the string representing n. 
				NULL if allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*string;
	int 	len;

	len = count_digit(n);
	string = malloc ((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	ft_putnbr(string, n);
	string[len] = '\0';
	return (string);
}

int		count_digit(int n)
{
	long	nbl;
	int		count;

	nbl = (long)n;
	count = 0;
	if (nbl < 0)
	{
		count++;
		nbl = -nbl;
	}
	while (nbl > 0)
	{
		nbl /= 10;
		count++;
	}
	return (count);
}

char	*ft_putnbr(char *s, int n)
{
	char	*num;
	long	nbl;

	num = "0123456789";
	nbl = (long)n;
	if (nbl < 0)
	{
		*s = '-';
		s++;
		nbl = -nbl;
	}
	if (nbl > 9)
	{
		s = ft_putnbr(s, nbl / 10);
		*s++ = num[nbl % 10];
		return (s);
	}
	*s++ = (char)(nbl + '0');
	return (s);
}

int	main(void)
{
	char	*s;

	s = ft_itoa(-214);
	printf("%s\n", s);
	//s = ft_itoa(214);
	//printf("%s\n", s);
	return (0);
}
