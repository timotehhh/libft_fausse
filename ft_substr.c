
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	end;

	i = start;
	end = 0;
	if (!(result = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (end < len && start < ft_strlen(s))
	{
		result[end] = s[i];
		end++;
		i++;
	}
	result[end] = '\0';
	return (result);
}
