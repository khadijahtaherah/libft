/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:53:50 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/10 18:44:19 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include "test.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	
	/* TESTING */
//	test_strlen(argv[1]);
//	test_atoi(argv[1]);
	test_memcpy(argv[1]);

	return (0);
}
/*
void	test_strlen(char *s)
{
	printf("String: %s\tLength: %d\n", s, ft_strlen(s));
}

void	test_atoi(char *s)
{
	int	val, val2;
	char	str[100];
	
	strcpy(str, s);
	val = ft_atoi(str);
	val2 = atoi(str);
	printf("Using ft_atoi:\nString: %s,\tInt value: %d\n\n", str, val);
	printf("Using libc atoi:\nString: %s,\tInt value: %d\n", str, val2);
}
*/
void	test_memcpy(char *src)
{
	
	char dest[50] = "88888888888";
	ft_memcpy(dest, src + 2, 5);
	printf("Src: %s\tDest: %s\n", src, dest);
	/*
	(void) src;
	Student student1;
	strcpy(student1.name, "Kai");
	student1.age = 21;

	Student student2;
	
	memcpy(&student2, &student1, sizeof(Student));

	printf("Name student2: %s\n", student2.name);
	printf("Age student2: %d\n", student2.age);
	*/
}







