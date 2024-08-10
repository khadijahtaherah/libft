/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:20:36 by skhairul          #+#    #+#             */
/*   Updated: 2024/08/10 16:20:43 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function    ft_putstr_fd - Put str to the file descriptor
   @params      s: The string to output
                fd: The file descriptor on which to write
   @brief       Outputs the string ’s’ to the given file descriptor
   @return      None    
*/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int main()
{
    char *s = "hello";
    ft_putstr_fd(s, 1);
}*/
