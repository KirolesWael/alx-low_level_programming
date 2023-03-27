#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i / 2; j++)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
	}
}

