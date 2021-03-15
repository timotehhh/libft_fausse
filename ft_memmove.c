#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tab_dest;
	unsigned char	*tab_src;

	tab_dest = (unsigned char *)dest;
	tab_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while ((int)n-- > 0)
			tab_dest[n] = tab_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
