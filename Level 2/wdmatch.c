#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return (i);
}

void    ft_wd_match(char *first, char *second)
{
    int i = 0;
    int j = 0;

    while (second[j])
    {
        if (first[i] == second[j])
            i++;
        j++;
    }

    if (i == ft_strlen(first))
        write(1, first, ft_strlen(first));
}

int main (int ac, char **av)
{
    if (ac == 3)
        ft_wd_match(av[1], av[2]);
    write(1, "\n", 1);
}