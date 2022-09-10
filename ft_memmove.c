#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned const char    *origin;
    unsigned char    *dest;
    size_t  i;

    origin = (unsigned const char *)src;
    dest = (unsigned char *)dst;
    i = 0;
    if (origin == '\0' && dest == '\0')
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