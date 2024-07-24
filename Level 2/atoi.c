#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return(result * sign);
}

int main(void)
{
    char str[] = "+789";
    char str1[] = "-123";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", ft_atoi(str1));
}