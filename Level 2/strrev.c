#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int temp;
    int length = ft_strlen(str) - 1;
    while (length > i)
    {
        temp = str[i];
        str[i] = str[length];
        str[length] = temp;
        i++;
        length--;
    }
    return (str);
}
