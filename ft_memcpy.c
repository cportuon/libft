#include "libft.h"

void * ft_memcpy(void *dst, const void *src, size_t n)
{
    char *str1;
    char *str2;
    size_t i;

    str1 = (char *)src;
    str2 = (char *)dst;
    i = 0;
    if (str1 == '\0' && str2 == '\0')
        return (0);
    while (i < n)
    {
        str2[i] = str1[i];
        i++;
    }
    return (str2);
}
/*int main(void)
{
    char str1[20] = "";
    char str2[20] = "";
    size_t c;

    c = 3;
    ft_memcpy(str2, str1, c);
    printf("ft_memcpy fuction: %s\n", str2);
    memcpy(str2, str1, c);
    printf("memcpy fuction: %s\n", str2);
    return(0);
}*/