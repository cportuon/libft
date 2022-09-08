#include "libft.h"
char * ft_strrchr(const char *s, int coin)
{
     char *str;
     int strlen;

     str = (char *)s;
     strlen = ft_strlen(s);
     while(strlen >= 0)
     {
          if(str[strlen] == coin)
               return(&str[strlen]);
          strlen--;
     }
     return(0);
}
int  main(void)
{
     const char *str;
     int coin;
     char *rst;

     str = "cportuon";
     coin = 'o';
     rst = ft_strrchr(str, coin);
     printf("ft_strrchr fuction:%s\n", rst);
     rst = strrchr(str, coin);
     printf("strrchr fuction:%s\n", rst);
}
