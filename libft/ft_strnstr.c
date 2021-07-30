#include "libft.h"

char		*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char*)str1;
	s2 = (char*)str2;
	i = 0;
	if (ft_strlen(s2) == '\0')
		return (s1);
	while (i < len && s1[i])
	{
		j = 0;
		while (i + j < len && s1[i + j] == s2[j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return (s1 + i);
		i++;
	}
	return (NULL);
}
