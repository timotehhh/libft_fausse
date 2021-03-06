
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (!(tab = malloc(size * nmemb)))
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
