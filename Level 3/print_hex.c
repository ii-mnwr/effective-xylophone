#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    while (*str)
        result = result * 10 + *str++ - '0';
    return(result);
}

int print_hex(int n)
{
    if (n >= 16)
        print_hex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}