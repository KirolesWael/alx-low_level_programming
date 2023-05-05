#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;
	int mul;

	if (b == NULL)
		return (0);

	mul = 1;
	n = 0;
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			n += mul;
		mul *= 2;
	}
	return (n);
}
