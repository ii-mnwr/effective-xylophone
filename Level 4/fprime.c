#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int number;

    if (argc == 2)
    {
        number = atoi(argv[1]); //Convert the input string to an integer
        if (number == 1)
            printf("1"); //Special Case
        else
        {
            i = 2; // Start with the smallest prime number
            int first = 1; //flag to handle the printing of the first factor without a leading"*"
            while (number >= i)
            {
                if (number % i == 0)
                {
                    if (first)
                        first = 0; // first factor doesnt need a leading "*"
                    else
                        printf("*"); // print * before each factors
                    printf("%d", i); // print current factor
                    number /= i; // divide the number by the current factor
                }
                else
                    i++; // increment to check the next possible factor
            }
        }
    }
    printf("\n");
    return (0);
}
