/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:22:16 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 20:51:31 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include guard */

#ifndef LIBFT_H
#define LIBFT_H

// INCLUDES

#include <stdio.h>
#include <stddef.h>

// FUNCTION PROTOTYPES

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
void	*ft_memset(void *b, int c, int len);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

#endif
