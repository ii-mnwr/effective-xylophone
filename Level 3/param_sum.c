#include <unistd.h>

void    param_sum(int num)
{
    if(num > 9)
        param_sum(num/9);
    write(1, &"0123456789"[num % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    param_sum(ac - 1);
    write(1, "\n", 1);
}