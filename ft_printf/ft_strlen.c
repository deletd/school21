#include "ft_printf.h"

size_t			ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	if (!str[0] || !str)
		return (0);
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int				ft_len(long long int n)
{
	int			len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void			ft_putstr(char *s, int n, t_struct *info)
{
	if (n == -1)
	{
		while (*s)
		{
			info->p_len += write(1, s, 1);
			s++;
		}
		return ;
	}
	while (*s && n--)
	{
		info->p_len += write(1, s, 1);
		s++;
	}
}
