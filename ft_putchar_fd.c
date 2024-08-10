/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:16:29 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/28 21:16:33 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_putchar_fd - Output char to file descriptor
   @params      c: The character to output
				fd: The file descriptor on which to write
   @brief		Outputs the character ’c’ to the given file descriptor
   @return		None
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
