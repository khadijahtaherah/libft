/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:22:16 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/19 19:04:54 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include guard */

#ifndef LIBFT_H
#define LIBFT_H

// INCLUDES

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include<string.h>

// FUNCTION PROTOTYPES

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, int len);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dest, const char *src, size_t dstsize);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);

#endif
