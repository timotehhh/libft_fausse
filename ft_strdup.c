
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	int		i;
	int		size;

	size = ft_strlen(s);
	i = 0;
	if (!(result = malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (s[0] == '\0')
	{
		if (!(result = malloc(sizeof(char) * 1)))
			return (NULL);
	}
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
