#include "main.h"
#include <string.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *concstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	concstr = malloc((size * sizeof(char)) + 1);
	if (concstr == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			concstr[k] = av[i][j];
			j++;
			k++;
		}
		i++;
		concstr[k] = '\n';
		k++;
	}
	return (concstr);
}
