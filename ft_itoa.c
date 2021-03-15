#include "libft.h"

static int	ft_find_size(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	int		stop;
	long	nb;
	char	*result;

	nb = n;
	stop = 0;
	i = ft_find_size(nb);
	if (!(result = malloc(sizeof(char) * i + 1)))
		return (NULL);
	result[i] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		stop = 1;
		nb = nb * (-1);
	}
	while (--i >= stop)
	{
		result[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}
