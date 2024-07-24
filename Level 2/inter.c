#include <unistd.h>

void inter(char *s1, char *s2)
{
	int ascii[256] = {0};
	while(*s2)
	{
		ascii[(unsigned char)*s2] = 1;
		s2++;
	}
	while(*s1)
	{
		if (ascii[(unsigned char)*s1] == 1)
		{
			write(1, s1, 1);
			ascii[(unsigned char)*s1] = 0;
		}
		s1++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}

