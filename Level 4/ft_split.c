#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		row;
	int		column;
	char	**split;

	i = 0;
	row = 0;
	if (!(split = (char **)malloc(sizeof(char *) * 1024)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		column = 0;
		if (!(split[row] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[row][column++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[row][column] = '\0';
		row++;
	}
	split[row] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("    The prophecy i s 	true lol 		   ici");
	while (i < 7)
	{
		printf("String %d : %s\n", i, tab[i]);
		i++;
	}
}