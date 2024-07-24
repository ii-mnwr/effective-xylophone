// #include <unistd.h>

// int ft_atoi(char *str)
// {
// 	int n = 0;
// 	while(*str >= '0' && *str <= '9')
// 	{
// 		n = n * 10;
// 		n = n + *str - '0';
// 		++str;
// 	}
// 	return (n);
// }
// void	ft_putnbr(int n)
// {
// 	if(n >= 10)
// 		ft_putnbr(n / 10);
// 	char c = (n % 10) + '0';
// 	write(1, &c, 1);
// }


// void	tab_mult(char *str)
// {
// 	int n;
// 	int i = 1;

// 	n = ft_atoi(str);
// 	while(i <= 9)
// 	{
// 		ft_putnbr(i);
// 		write(1, " x ", 3);
// 		ft_putnbr(n);
// 		write(1, " = ", 3);
// 		ft_putnbr(i * n);
// 		write(1, "\n", 1);
// 		++i;
// 	}
// }
// int main(int ac , char **av)
// {
// 	if(ac == 2)
// 		tab_mult(av[1]);
// 	else
// 		write(1, "\n", 1);
// }

#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result);
}

int putnmbr(int num)
{
	if (num > 9)
		putnmbr(num / 10);
	write(1, &"0123456789"[num % 10 ], 1);
}

void	table(char *str)
{
	int i = 1;
	int n = ft_atoi(str);

	while ((i <= 9))
	{
		putnmbr(i);
		write(1, " x ", 3);
		putnmbr(n);
		write(1, " = ", 3);
		putnmbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		table(av[1]);
	else
		write(1, "\n", 1);
}