#include <unistd.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result	* 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int putnumber(int num)
{
	if (num > 9)
		putnumber(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int is_prime(int num)
{
	int check = 2;
	if (num <= 1)
		return 0;
	while(check < num)
	{
		if(num % check == 0)
			return 0;
		check++;
	}
	return 1;
}

int	add_prime(int num)
{
	int i = 2;
	int sum = 0;
	if (num <= 1)
		return 0;
	while (i <= num)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int main(int ac, char **av)
{
	int i;
	if(ac == 2 && (i = add_prime(ft_atoi(av[1]))))
		putnumber(i);
	else
		return 0;
	write(1, "\n", 1);
}