#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        //¿Es lo mismo? lst->next = lst;
        i++;
    }
    return (i);
}