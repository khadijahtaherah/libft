/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:32:05 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/07 20:03:59 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	/*
	char c;

	argv++;
	c = argv[0][0];
	if (ft_isalpha(c))
		printf("%c is alphabet\nReturn value: %d\n", c, ft_isalpha(c));
	else
		printf("%c is not alphabet\nReturn value: %d\n", c, ft_isalpha(c));
	
	char *s = "hello";
	printf("%s, length: %zu\n", s, ft_strlen(s));
*/
	//char s[] = "hello world";
	int n = 10;
	int arr[n];
	ft_memset(arr, 0, n*sizeof(arr[0]));
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return (0);
}
