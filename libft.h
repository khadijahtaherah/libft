/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:22:16 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/07 19:56:19 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include guard */

#ifndef LIBFT_H
#define LIBFT_H

// INCLUDES

#include <stdio.h>
#include <stddef.h>

// FUNCTION PROTOTYPES

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, int len);
int	toupper(int c);
int	tolower(int c);

#endif
