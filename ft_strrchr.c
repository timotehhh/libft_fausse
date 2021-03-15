#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0 && str[i] != c)
		i--;
	if (i < 0)
		return (NULL);
	return ((char *)str + i);
}
