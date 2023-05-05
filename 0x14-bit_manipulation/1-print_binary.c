#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;
	char c;

	mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask > 0)
	{
		c = (n & mask) ? '1' : '0';
		if (c == '1')
			flag = 1;
		if (flag == 1)
			_putchar(c);
		mask >>= 1;
	}
	if (!flag)
		_putchar('0');
}
