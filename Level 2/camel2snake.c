#include <unistd.h>

void    camel_2_snake(char *str)
{
    int i = 0;

    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1, "_", 1);
            str[i] += ' ';
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        camel_2_snake(av[1]);
    write(1, "\n", 1);
}