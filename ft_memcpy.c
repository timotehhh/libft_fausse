#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tab_dest;
	unsigned char		*tab_src;

	i = 0;
	tab_dest = (unsigned char *)dest;
	tab_src = (unsigned char *)src;
	while (i < n && (dest || src))
	{
		tab_dest[i] = tab_src[i];
		i++;
	}
	return (dest);
}
