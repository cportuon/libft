#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
    size_t  i;
    char *str;

    i = 0;
    str = s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}
/*int main(void)
{
    char    str[20] = "Paco HDP";
    size_t  c;

    c = 2;
    ft_bzero(str, c);
    printf("ft_bzero fuction: %s\n", str);
    bzero(str, c);
    printf("bzero fuction: %s\n", str);
    return(0);
}*/