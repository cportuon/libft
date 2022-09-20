#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    size_t  len1;
    size_t  len2;
    char    *dest;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    j = 0;
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    dest = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!dest)
        return (NULL);
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[j])
        dest[i++] = s2[j++];
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    printf("Fuction ft_strjoin: %s\n", ft_strjoin("Cosme", "Portuondo"));
    return (0);
}