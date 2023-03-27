#include "main.h"

/**
  * _strlen - finds length of a string
  * @s: the string we are trying to find its length
  *
  *Return: the length
  */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

