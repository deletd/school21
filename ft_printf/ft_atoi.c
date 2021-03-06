#include "ft_printf.h"

int		ft_atoi(const char *str)
{
	long long int	res;
	int				sign;

	sign = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if ((res * 10) < res)
			return ((sign < 0) ? 0 : -1);
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)res * sign);
}
