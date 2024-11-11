#include "libft.h"

void	del(void *content)
{
	if (content)
		free(content);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (lst)
	{
		while (*lst)
		{
			p = *lst;
			(*lst) = (*lst)->next;
			del(p->content);
			write(1, "1", 1);
		}
		*lst = NULL;
	}
}

#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	s1 = "hello 1";
	s2 = "hello 2";
	s3 = "hello 3";
	s1 = malloc(sizeof(char) * 8);
	s2 = malloc(sizeof(char) * 8);
	s3 = malloc(sizeof(char) * 8);
	node1 = ft_lstnew(s1);
	node2 = ft_lstnew(s2);
	node3 = ft_lstnew(s3);
	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstclear(&node1, del);
	/*while(lst)
    {
        printf("%s\n",lst->content);
        lst = lst->next;    
    }*/
	if (!node3)
		printf("heeeeee");
	return (0);
}
