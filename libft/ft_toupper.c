#include "libft.h"

int		ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 'a' + 'A');
	return (ch);
}
