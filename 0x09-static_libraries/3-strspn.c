#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, byte;
	int f;

	i = 0;
	byte = 0;
	while (s[i] != '\0')
	{
		f = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				byte++;
				f++;
			}
		}
		if (f == 0)
			return (byte);
		i++;
	}
	return (byte);
}
