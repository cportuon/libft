#include "libft.h"

char	*ft_strdup(const char *s1)
{
    size_t  i;
    size_t  len;
    char    *s2;

    len = ft_strlen(s1);
    s2 = malloc(sizeof(char) * (len + 1));
    if (!s2)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    return (s2);
}

int main(void)
{
    printf("Fuction FT_STRDUP: %s\n", ft_strdup("Good morning"));
    printf("Fuction STRDUP: %s\n", strdup("Good morning"));
    return (0);
}