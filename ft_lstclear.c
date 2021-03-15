#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*point;

	point = *lst;
	while (point != NULL)
	{
		ft_lstdelone(point, del);
		point = point->next;
	}
	*lst = NULL;
}
