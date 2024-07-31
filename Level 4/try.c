#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int num;
	if(ac == 2)
	{
		num = atoi(av[1]);
		if(num == 1)
			printf("1");
		else
		{
			i = 2;
			int first = 1;
			while(num >= i)
			{
				if (num % i == 0)
				{
					if (first)
						first = 0;
					else
						printf("*");
					printf("%d", i);
					num /= i;
				}
				else
					i++;
			}
		}	
	}
	printf("\n");
	return(0);
}

