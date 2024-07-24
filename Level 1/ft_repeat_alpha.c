#include <unistd.h>
#include <stdio.h>

int ft_repeatalpha(char c)
{
    if (c >= 97 && c <= 122)
        return (c - 97 + 1);
    else if (c >= 65 && c <= 90)
        return(c - 65 + 1);
    return (1);
}

int main (int ac, char **av)
{
    int i = 0;
    int count;

    if (ac == 2)
    {
        while (av[1][i])
        {
            count = ft_repeatalpha(av[1][i]);
            while (count > 0)
            {
                write(1, &av[1][i], 1);
                count--;
            }
            i++;
        }
    }
}