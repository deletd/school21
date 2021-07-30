#include "libft.h"

void				*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)dest;
	while (i < n)
	{
		*str = c;
		str++;
		i++;
	}
	return (dest);
}
