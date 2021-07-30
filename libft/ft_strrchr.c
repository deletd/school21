#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (*(str + len) == (char)ch)
			return (str + len);
		len--;
	}
	return (NULL);
}
