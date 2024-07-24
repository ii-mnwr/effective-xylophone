#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int num)
{
    if(num == -2147483648)
        return("-2147483648\0");
    int n = num;
    int length = 0;
    if(n <= 0)
        length++;
    while(n)
    {
        n /= 10;
        length++;
    }
    char *result = (char *)malloc(sizeof(char) * (length + 1));
    if(!result)
        return(NULL);
    result[length] = '\0';
    if (num == 0)
    {
        result[0] = '0';
        return (result);
    }
    if (num < 0)
    {
        result[0] = '-';
        num = -num;
    }
    while(num)
    {
        result[--length] = num % 10 + '0';
        num /= 10;
    }
    return(result);
}

char    *ft_itoa(int nbr)
{
    int n = nbr;
    int length = 0;

    if(nbr = -2147483648)
        return("-2147483648\0");
    if(nbr <= 0)
        length++;
    while(n)
    {
        n /= 10;
        length++;
    }
    char *result = (char *)malloc(sizeof(char) * (length + 1));
    if(!result)
        return(NULL);
    if(nbr == '0')
    {
        result[0] = '0';
        return(result);
    }
    if(nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        result[--length] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (result);
}

int main(void)
{
    int nbr1 = 2147483641;
    int nbr2 = 0;
    int nbr3 = -12;
    int nbr4 = 56;
    int nbr5 = 2147483647;
    int nbr6 = -2147483648;
    printf("%d\n", nbr1);
    printf("%d\n", nbr2);
    printf("%d\n", nbr3);
    printf("%d\n", nbr4);
    printf("%d\n", nbr5);
    printf("%d\n", nbr6);
}