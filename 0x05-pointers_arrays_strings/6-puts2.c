#include "main.h"

/**
 * puts2 - prints a string to stdout
 * @str: pointer to the string to print
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
		i++;
	}
	_putchar('\n');
}