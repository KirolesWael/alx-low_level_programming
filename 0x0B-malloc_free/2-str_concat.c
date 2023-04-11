#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i;
	int len1, len2;

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s = malloc(sizeof(char) * (len1 + len2));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[i + len1] = s2[i];
		i++;
	}
	s[len1 + i] = '\0';

	return (s);
}
