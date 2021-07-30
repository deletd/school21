#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *res;

	res = (char*)malloc(num * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, (num * size));
	return (res);
}
