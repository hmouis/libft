
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		if (*lst)
		{
			(*lst) = ft_lstlast(*lst);
			(*lst)->next = new;
		}
		(*lst) = new;
	}
}
