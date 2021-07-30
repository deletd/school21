#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *str, size_t size)
{
	size_t	i;

	if (!dst || !str)
		return (0);
	if (size == 0)
		return (ft_strlen(str));
	i = 0;
	while (str[i] && i < size - 1)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(str));
}
