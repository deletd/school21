#include "libft.h"

static void		ft_del_ever(t_list *lst, void (*del)(void*))
{
	t_list		*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		(*del)(tmp);
	}
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list		*new_list;
	t_list		*tmp;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		if (!(tmp = (*f)(lst->content)))
			ft_del_ever(new_list, del);
		ft_lstadd_back(&tmp, new_list);
		lst = lst->next;
	}
	return (new_list);
}
