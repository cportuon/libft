#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *result;
    t_list  *temp;

    result = NULL;
    while (lst)
    {
        temp = ft_lstnew(lst, f(lst->content));
        if (!temp)
        {
            ft_lstclear(&result, del);
            return (NULL);
        }
        ft_lstadd_front(&result, temp);
        lst = lst->next;    
    }
    return (temp);
}