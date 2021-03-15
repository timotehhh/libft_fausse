#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new1;

	if (!(new1 = malloc(sizeof(t_list))))
		return (NULL);
	new1->content = content;
	new1->next = NULL;
	return (new1);
}
