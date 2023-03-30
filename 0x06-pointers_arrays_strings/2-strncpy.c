#include "main.h"

/**
  *_strncpy - copy 2 strings
  *@dest : destniation
  *@src : source string
  *@n: tells us how manybits to use
  *Return: pointer to the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int d_len, s_len, i;

	d_len = 0;
	s_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	while (src[s_len] != '\0')
	{
		s_len++;
	}
	if (n > s_len)
		n = s_len + 1;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[d_len + i] = '\0';
	return (dest);
}
