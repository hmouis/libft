#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = ft_lstsize(lst);
	while (i > 1)
	{
		lst = lst->next;
		i--;
	}
	return (lst);
}
