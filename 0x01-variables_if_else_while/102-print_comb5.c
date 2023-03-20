#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	for (d1 = 0; d1 < 100; d1++)
	{
		for (d2 = d1 + 1; d2 < 100; d2++)
		{
			if (d2 > d1)
			{
				putchar((d1 / 10) + 48);
				putchar((d1 % 10) + 48);
				putchar(' ');
				putchar((d2 / 10) + 48);
				putchar((d2 % 10) + 48);
				if ((d1 == 98) && (d2 == 99))
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
