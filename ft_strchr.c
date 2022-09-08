#include "libft.h"
char * ft_strchr(const char *s, int coin)
{
    int  i;
    char *str;

    i = 0;
    str = (char *)s;
    while(str[i] != '\0')
    {
        if(str[i] == coin)
            return (&str[i]);
        i++;
    }
    return (0);
}
int main(void)
{
    const char *str;
    int coin;
    char *rst;

    str = "cportuon";
    coin = '0';
    rst = ft_strchr(str, coin);
    printf("ft_strchr fuction: %s\n", rst);
    rst = strchr(str, coin);
    printf("strchr fuction: %s\n", rst);
}