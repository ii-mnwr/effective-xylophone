#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result);
}

void    pgcd(int n1, int n2)
{
    int div = 1;
    int pgcd = 0;

    if (n1 <= 0 || n2 <= 0)
        return ;
    while((div <= n1) || (div <= n2))
    {
        if(((n1 % div) == 0) && (n2 % div) == 0)
            pgcd = div;
        div++;
    }
    printf("%d", pgcd);
}

int main(int ac, char **av)
{
    if (ac == 3)
        pgcd(ft_atoi(av[1]), ft_atoi(av[2]));
}