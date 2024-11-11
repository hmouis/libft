#include "libft.h"

void  del(void *content)
{
    if(content)
        free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst)
    {
        del(lst->content);
        free(lst);
    }
}
#include <stdio.h>

int main()
{
    char *s1 = "hello 1";
    s1 = malloc(sizeof(char) * 8);

    t_list *node1;
    node1 = ft_lstnew(s1);

    ft_lstdelone(node1,del);
    
    /*while(lst)
    {
        printf("%s\n",lst->content);
        lst = lst->next;    
    }*/
    if (node1->content == NULL)
        printf("heeeeee");



    return (0);

}
