
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char		f;
	char		c;
	long long	n;

	f = '-' ;
	n = nb;
	if (n < 0)
	{
		write(fd, &f, 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}