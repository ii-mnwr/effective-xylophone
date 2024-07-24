#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int lcm;

    if (a == 0 || b == 0)
        return (0);
    if (a > b)
        lcm = a;
    if (b > a)
        lcm = b;
    while("lcm")
    {
        if(((lcm % a) == 0) && ((lcm % b) == 0))
            return(lcm);
        ++lcm;
    }
}

int main()
{    
    printf("%u\n", lcm(8, 10));
}