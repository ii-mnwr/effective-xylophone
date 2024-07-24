#include <unistd.h>

void    alpha_mirror(char *str)
{
    int i = 0;

    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'A' - str[i] + 'Z';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'a' - str[i] + 'z';
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        alpha_mirror(av[1]);
    write(1, "\n", 1);
}