#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = ((*lst)->next);
		(*del)(tmp->content);
		free(tmp);
	}
}
