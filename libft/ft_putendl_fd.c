#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	ch;

	ch = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &ch, 1);
}
