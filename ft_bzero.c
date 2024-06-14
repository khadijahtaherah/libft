/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:58:13 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/08 13:05:02 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_bzero
 * @params		s: string, n: number of bytes
 * @brief		Writes n zeroed bytes to string s. If n == 0, it does nothing
 * @return		Return string with n zeroed bytes
 */
void	bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)s;
	i = 0;
	while (i < n)
		b[i++] = '\0';
}
