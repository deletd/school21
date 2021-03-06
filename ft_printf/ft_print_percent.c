#include "ft_printf.h"

static void		ft_print_spaces(int num, t_struct *info)
{
	if (info->is_zero)
	{
		ft_put_zero(num, info);
		return ;
	}
	ft_put_space(num, info);
}

void			ft_print_percent(t_struct *info)
{
	char	arg;

	arg = '%';
	if (info->width > 0)
	{
		ft_print_spaces(info->width - 1, info);
		info->p_len += write(1, &arg, 1);
		return ;
	}
	else if (info->width < 0)
	{
		info->p_len += write(1, &arg, 1);
		ft_print_spaces(-info->width - 1, info);
		return ;
	}
	else
		info->p_len += write(1, &arg, 1);
}
