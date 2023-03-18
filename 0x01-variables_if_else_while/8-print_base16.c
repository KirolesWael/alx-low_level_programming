#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
