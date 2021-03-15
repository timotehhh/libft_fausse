#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	minus;

	nb = n;
	minus = '-';
	if (nb < 0)
	{
		nb = nb * (-1);
		write(fd, &minus, 1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + 48, fd);
}
