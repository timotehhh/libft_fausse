#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char*)s)[0] != (unsigned char)c)
	{
		i++;
		s++;
	}
	if (i == n)
		return (NULL);
	return ((void *)s);
}
