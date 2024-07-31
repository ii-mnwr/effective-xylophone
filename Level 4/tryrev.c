 #include <unistd.h>

void	rev_wstr(char *str)
{
	int	i;
	int	j;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == '\0' || str[i] == ' ' || str[i] == '\t'))
			i--;
		j = i;
		while (j >= 0 && !(str[j] == ' ' || str[j] == '\t'))
			j--;
		if (first_word == 0)
			write(1, " ", 1);
		write(1, str + j + 1, i - j);
		first_word = 0;
		i = j;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
}
