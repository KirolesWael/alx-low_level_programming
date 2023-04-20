#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arr;

	if (!separator)
		separator = "";
	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arr, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
