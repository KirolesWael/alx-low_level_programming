#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, n1, n2, new;

	n1 = 1;
	n2 = 2;

	printf("%d, %d, ", n1, n2);

	for (i = 0; i <= 50; i++)
	{
		new = n1 + n2;
		n1 = n2;
		n2 = new;
		printf("%d, ", n2);
	}

	return (0);
}
