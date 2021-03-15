#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (i > size)
		result = size + j;
	else
		result = i + j;
	if (result >= size && size <= i)
		return (result);
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
