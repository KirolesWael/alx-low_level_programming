#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[0] != '\0')
	{
		_putchar(str[0]);
		i++;
	}
	
}
