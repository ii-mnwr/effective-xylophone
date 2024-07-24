#include <unistd.h>

char *ft_revprint(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    while (i >= 0)
    {
        write(1, str + i, 1);
        i--;
    }
    return(str);
}

int main (int ac, char **av)
{
    if (ac == 2)
        ft_revprint(av[1]);
    write(1, "\n", 1);
}