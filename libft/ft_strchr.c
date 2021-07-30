#include "libft.h"

char	*ft_strchr(char *str, int num)
{
	char	*res;

	res = str;
	while (*res != num)
	{
		if (*res == '\0')
		{
			return (NULL);
		}
		res++;
	}
	return (res);
}
