#include "main.h"

/**
  *_strcat - cat 2 strings
  *@dest : destniation
  *@src : source string
  *return : cat string
  */
char *_strcat(char *dest, char *src)
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
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[d_len + i] = src[i];
	}
	dest[d_len + i] = '\0';
	return (dest);
}
