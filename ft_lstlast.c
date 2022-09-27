#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    int     i;
    t_list  *last;

    i = 0;
    if (!lst)
        return (NULL);
    last = lst;
    while (last->next != NULL)
        last = last->next;
    return (last);
}