#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab_s;

	i = 0;
	tab_s = (unsigned char *)s;
	while (i < n)
	{
		tab_s[i] = c;
		i++;
	}
	return (s);
}
