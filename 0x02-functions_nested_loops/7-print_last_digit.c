#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @i: takes number input
 *
 * Return: Always 0 (Success)
*/

int print_last_digit(int i)
{
	if (i > 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		_putchar((i % 10) * -1 + '0');
		return (-1 * (i % 10));
	}
}
