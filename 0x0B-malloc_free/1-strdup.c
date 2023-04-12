#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *strcp;
	int i, size;

	size = 0;
	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	strcp = malloc((size + 1) * sizeof(char));
	if (strcp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		strcp[i] = str[i];
	}
	strcp[i] = '\0';
	return (strcp);
}
