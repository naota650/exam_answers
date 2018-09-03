#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *lst;
	lst = begin_list;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return i;
}
