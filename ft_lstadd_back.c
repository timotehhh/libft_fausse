#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	current = ft_lstlast(*alst);
	if (current == NULL)
		*alst = new;
	else
		current->next = new;
	new->next = NULL;
}
