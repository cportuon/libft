#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
     unsigned char  *str;
     size_t    i;

     str = (unsigned char *) s;
     i = 0;
     while (i < n)
     {
          if (str[i] == (unsigned char)c)
               return ((void *)str); //No se que poner en el return
          i++;
     }
     return (0);
}
int  main(void)
{
     const char     *str;
     int  c;
     size_t    n;
     
     str = "Hoy es sábado primo!!";
     c = 's';
     n = 7;
     printf("ft_memchr fuction: %d\n", ft_memchr(str, c, n));
     printf("memchr fuction: %d\n", memchr(str, c, n));
}