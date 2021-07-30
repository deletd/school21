#include "libft.h"

int		ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch - 'A' + 'a');
	return (ch);
}
