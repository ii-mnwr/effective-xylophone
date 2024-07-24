#include <unistd.h>

void    ft_search_n_replace(char *str, char s, char r)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == s)
            write(1, &r, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    if (ac == 4)
    {
        if (av[2][1] == '\0' && av[3][1] == '\0')
            ft_search_n_replace(av[1], av[2][0], av[3][0]);
        write(1, "\n", 1);
    }
}