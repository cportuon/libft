#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return (NULL);
    if (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}