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
	int d3;
	int d4;
	int i;
	int j;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57 ; d3++)
			{
				for (d4 = 48; d4 <= 57; d4++)
				{
					i = d1 * 10 + d2;
					j = d3 * 10 + d4;
					if (i <= j)
						continue;
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if ((d1 == 56) && (d2 == 57) && (d3 == 56) && (d4 == 56))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
