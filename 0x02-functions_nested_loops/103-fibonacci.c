#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, new, sum;

	n1 = 1;
	n2 = 2;
	sum = 2;
	while (n2 <= 4000000)
	{
		new = n1 + n2;
		n1 = n2;
		n2 = new;

		if (n2 % 2 == 0)
			sum += n2;
	}
	printf("%ld\n",  sum);
	return (0);
}
