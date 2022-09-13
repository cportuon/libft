#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char       *dest;
    unsigned const char *origin;
    size_t              i;

    dest = (unsigned char *)dst;
    origin = (unsigned const char *)src;
    i = 0;
    if (!dest && !origin)
        return (0);
    while (i < len)
    {
        dest[i] = origin[i];
        i++;
    }
    return ((void *)dest);
}
int main(void)
{
    size_t  len;
    char    o[20] = "Portu";
    char    d[20] = "Cosme";
    void    *dest;

    len = 3;
    dest = ft_memmove(d, o, len);
    printf("ft_memmove fuction: %s\n", (char *)dest);
    dest = memmove(d, o, len);
    printf("memmove fuction: %s\n", (char * )dest);
    return(0);
}