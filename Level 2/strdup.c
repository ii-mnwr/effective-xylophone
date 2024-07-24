#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return(i);
}

char    *ft_strcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strdup(char *src)
{
    int size;
    char *dup;

    size = ft_strlen(src);
    dup = (char *)malloc(sizeof(char)* size + 1);
    if (!dup)
        return(NULL);
    return(ft_strcpy(dup, src));
}