#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char*)str;
	while (n > 0)
	{
		*dest = 0;
		dest++;
		n--;
	}
}
