#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return (NULL);
    if (!lst)
    {
        *lst = new;
        return (NULL);
    }
    new->next = *lst;
    *lst = new;
}
