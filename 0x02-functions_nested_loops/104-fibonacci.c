#include"main.h"


/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int n1, n2, new, i;

	n1 = 1;
	n2 = 2;
	for (i = 0; i <= 98; i++)
	{
		new = n1 + n2;
		n1 = n2;
		n2 = new;
	}

	return (0);
}
