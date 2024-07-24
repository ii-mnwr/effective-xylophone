int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if(str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i])
    {
        result *= str_base;
        if(str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - 'A' + 10;
        else if(str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 'a' + 10;
        i++;
    }
    return(result * sign);
}

#include <stdio.h>

int main(void)
{
    // Test cases
    const char *test1 = "1010";     // Binary (base 2) -> should be 10
    const char *test2 = "1A";       // Hexadecimal (base 16) -> should be 26
    const char *test3 = "123";      // Decimal (base 10) -> should be 123
    const char *test4 = "-7B";      // Base 12 -> should be -83
    const char *test5 = "1a";       // Base 16 (lowercase) -> should be 26
    const char *test6 = "Z";        // Base 36 -> should be 35
    const char *test7 = "-101";     // Base 2 (negative) -> should be -5
    const char *test8 = "100";      // Base 4 -> should be 16

    // Print results
    printf("Base 2:    %s -> %d\n", test1, ft_atoi_base(test1, 2));
    printf("Base 16:   %s -> %d\n", test2, ft_atoi_base(test2, 16));
    printf("Base 10:   %s -> %d\n", test3, ft_atoi_base(test3, 10));
    printf("Base 12:   %s -> %d\n", test4, ft_atoi_base(test4, 12));
    printf("Base 16:   %s -> %d\n", test5, ft_atoi_base(test5, 16));
    printf("Base 36:   %s -> %d\n", test6, ft_atoi_base(test6, 36));
    printf("Base 2:    %s -> %d\n", test7, ft_atoi_base(test7, 2));
    printf("Base 4:    %s -> %d\n", test8, ft_atoi_base(test8, 4));

    return 0;
}
