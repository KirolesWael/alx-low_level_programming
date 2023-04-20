#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*func)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	func = get_op_func(op);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((func == op_div || func == op_mod) && b  == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(a, b);

	printf("%d\n", res);

	return (0);
}
