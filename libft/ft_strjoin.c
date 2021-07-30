#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*join;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char*)malloc(sizeof(char) * len);
	if (!join || (!s1 && !s2))
		return (NULL);
	tmp = join;
	while (*s1)
		*(tmp++) = *(s1++);
	while (*s2)
		*(tmp++) = *(s2++);
	*tmp = '\0';
	return (join);
}
