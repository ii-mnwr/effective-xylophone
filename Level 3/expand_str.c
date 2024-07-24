#include <unistd.h>

void epur_str(char *str)
{
    int i;
    int word_started = 0;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t') // Skip leading spaces and tabs
        i++;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t')
        {
            if (str[i + 1] > ' ' && str[i + 1] != '\0') // Check if next character starts a new word
            {
                if (word_started)
                    write(1, "   ", 3); // Write three spaces
            }
        }
        else
        {
            write(1, &str[i], 1); // Write the character and mark that a word has started
            word_started = 1;
        }
        i++;
    }
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}