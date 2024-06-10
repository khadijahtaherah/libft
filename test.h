/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 11:43:52 by skhairul          #+#    #+#             */
/*   Updated: 2024/06/08 15:27:06 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H

// STRUCTS
typedef struct
{
	char name[256];
	int age;
} Student;

// TEST FUNCTIONS PROTOTYPES

void	test_strlen(char *s);
void	test_atoi(char *s);
void	test_memcpy(char *s);

#endif
