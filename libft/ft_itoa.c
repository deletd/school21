#include "libft.h"

static int			ft_len(long long int n)
{
	int				len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char			*ft_init(char *str, long long int n)
{
	int				init;

	init = ft_len(n) - 1;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[init] = (n % 10) + '0';
		n /= 10;
		init--;
	}
	return (str);
}

char				*ft_itoa(int num)
{
	long long int	n;
	char			*res;

	n = num;
	if (n == 0)
	{
		if (!(res = (char*)malloc(sizeof(char) * 2)))
			return (NULL);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	res = (char*)malloc(sizeof(char) * (ft_len(n) + 1));
	if (!res)
		return (NULL);
	ft_memset(res, '\0', ft_len(n) + 1);
	res = ft_init(res, n);
	return (res);
}
