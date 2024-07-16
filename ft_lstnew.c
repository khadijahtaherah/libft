#include "libft.h"

/* @function	ft_lstnew
   @params		content: the content to be assigned to 
   @brief		Allocates (with malloc(3)). The member variable ’content’
   				is initialized with the value of the parameter ’content’.
				The variable ’next’ is initialized to NULL.
   @return		The new struct node
*/

t_list *ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}