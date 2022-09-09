#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    char    *str1;
    char    *str2;
    size_t  i;

    str1 = (char *)src;
    str2 = (char *)dst;
    i = 0;
    if (str1 == '\0' && str2 == '\0')
        return (0);
    while (i < len)
    {
        
    }
}
int main(void)
{
    size_t  len;
    char    str1[20] = "";
    char    str2[20] = "";

    len = 3;
    printf("ft_memmove fuction: %s\n", ft_memmove(str2, str1, len));
    printf("memmove fuction: %s\n", memmove(str2, str1, len));
    return(0);
}