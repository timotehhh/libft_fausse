#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*result;

	i = 0;
	size = ft_strlen(str);
	if (!(result = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		result[i] = f(i, str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
