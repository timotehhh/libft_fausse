
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tab_s;

	i = 0;
	tab_s = (char *)s;
	while (i < n)
	{
		tab_s[i] = '\0';
		i++;
	}
}
