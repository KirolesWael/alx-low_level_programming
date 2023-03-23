#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i;
	long int max;
	long int n;

	max = -1;
	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		if (i % 2 == 0)
			continue;
		else
		{
			if (n % i == 0)
			{
				max = i;
			}
		}
	}
	printf("%ld\n", max);
	return (0);
}
