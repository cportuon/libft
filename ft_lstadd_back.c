#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    last = ft_lstlast(*lst);
    if (!new)
        return (NULL);
    if (!*lst)
        *lst = new;
    else if (last == NULL)
        return (NULL);
    last->next = new;
}