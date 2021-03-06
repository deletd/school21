#include "ft_printf.h"

void	ft_putnbr(long n, int fd, t_struct *info)
{
	char			c;
	unsigned int	nu;

	if (n < 0)
	{
		info->p_len += write(fd, "-", 1);
		nu = n * -1;
	}
	else
		nu = n;
	if (nu > 9)
	{
		c = nu % 10 + '0';
		ft_putnbr((nu / 10), fd, info);
		info->p_len += write(fd, &c, 1);
	}
	if (nu <= 9)
	{
		c = nu + '0';
		info->p_len += write(fd, &c, 1);
	}
}
