#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k;
	char *s;

	s = malloc(sizeof(char) + strlen(s1) + n + 1);

	if (!s)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	i = 0;
	k = 0;
	while (s1[i])
	{
		s[k] = s1[i];
		i++;
		k++;
	}
	i = 0;
	while (i < n)
	{
		s[k] = s2[i];
		i++;
		k++;
	}
	s[k] = '\0';
	return (s);
}
