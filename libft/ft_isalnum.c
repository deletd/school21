#include "libft.h"

int		ft_isalnum(int ch)
{
	return (ft_isalpha(ch) || ft_isdigit(ch));
}
