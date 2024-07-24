#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\r' || av[1][i] == '\n'))
            i++;
        while (av[1][i] != '\0' && (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\r' && av[1][i] != '\n'))
        {
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}