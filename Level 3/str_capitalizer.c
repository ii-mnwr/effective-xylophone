#include <unistd.h>

// void	ft_str_capitalizer(char *str)
// {
// 	int	i;

// 	i = 1;
// 	if (str[0] >= 'a' && 'z' >= str[0])
// 		str[0] -= 32;
// 	write(1, &str[0], 1);
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'A' && 'Z' >= str[i])
// 			str[i] += 32;
// 		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || str[i - 1] == '\t'))
// 			str[i] -= 32;
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }


void    ft_str_capitalizer(char *str)
{
    int i = 1;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    write(1, &str[0], 1);
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == ' ' || str[i - 1] == '\t')
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while(i < ac)
        {
            ft_str_capitalizer(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	if (argc > 1)
// 	{
// 		i = 1;
// 		while (i < argc)
// 		{
// 			ft_str_capitalizer(argv[i]);
//             write(1, "\n", 1);
// 			i++;
// 		}
// 	}
// 	return (0);
// }

