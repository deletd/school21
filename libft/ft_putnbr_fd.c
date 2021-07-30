#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	nu;

	if (n < 0)
	{
		write(fd, "-", 1);
		nu = n * -1;
	}
	else
		nu = n;
	if (nu > 9)
	{
		c = nu % 10 + '0';
		ft_putnbr_fd((nu / 10), fd);
		write(fd, &c, 1);
	}
	if (nu <= 9 && nu >= 0)
	{
		c = nu + '0';
		write(fd, &c, 1);
	}
}
