
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*newlst;
	
	if (!lst || !f)
		return (NULL);
	if (!(newlst = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	head = newlst;
	lst = lst->next;
	while (lst)
	{
		if (!(newlst = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&head, newlst);
	}
	return (head);
}
