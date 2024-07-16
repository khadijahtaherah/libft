#include "libft.h"

/* @function	ft_lstnew
   @params		content: the content to be assigned
   @brief
   @return
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