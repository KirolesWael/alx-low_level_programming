#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int c = 'a';c <= 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
