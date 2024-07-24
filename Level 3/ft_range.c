#include <stdlib.h>
#include <stdio.h>

int absolute(int num)
{
    if (num < 0)
        return (-num);
    return (num);
}
int *ft_range(int start, int end)
{
    int i = 0;
    int length = absolute((end - start)) + 1;
    int *result = (int *)malloc(sizeof(int) * length);
    if(!result)
        return(NULL);
    while(i < length)
    {
        if(start < end)
        {
            result[i] = start;
            start++;
            i++;
        }
        else{
            result[i] = start;
            start--;
            i++;
        }
    }
    return(result);
}

int main(void)
{
    int start = 1;
	int end = 10;
	int *range = ft_range(start, end);
	int len = abs(end - start) + 1;

	printf("Range from %d to %d:\n", start, end);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);

	return 0;
}
