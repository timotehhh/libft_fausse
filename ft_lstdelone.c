#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*point;

	point = lst;
	if (lst != NULL)
	{
		del(lst->content);
		lst = lst->next;
		free(point);
	}
}
