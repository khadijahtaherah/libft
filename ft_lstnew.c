/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:21:07 by skhairul          #+#    #+#             */
/*   Updated: 2024/08/10 16:21:10 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @function	ft_lstnew
   @params		content: the content to be assigned to 
   @brief		Allocates (with malloc(3)). The member variable ’content’
   				is initialized with the value of the parameter ’content’.
				The variable ’next’ is initialized to NULL.
   @return		The new struct node
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
