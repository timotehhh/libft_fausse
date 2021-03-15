#include "libft.h"

int		ft_isprint(int c)
{
	if (c > 126 || c < 32)
		return (0);
	return (1);
}
