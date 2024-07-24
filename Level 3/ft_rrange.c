#include <stdlib.h>
#include <stdio.h>

int absolute(int number)
{
    if (number < 0)
        return(-number);
    return(number);
}

int *ft_rrange(int start, int end)
{
    int i = 0;
    int length;
    int *result;

    if (start > end)
        return(ft_rrange(end, start));
    length = absolute((start - end)) + 1;
    result = (int *)malloc(sizeof(int) * length);
    if(!result)
        return(NULL);
    while(i < length)
    {
        result[i] = start;
        start++;
        i++;
    }
    return(result);
}

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = 40;
	end = 51;
	tab = ft_rrange(start, end);
	size = absolute(end - start) + 1;
	while (idx < size)
	{
		printf(" %i ", tab[idx]);
		idx++;
	}
	printf("\n");
}