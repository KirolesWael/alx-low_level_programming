#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies 2 nums
  * @argc: num of args
  * @argv: names of args
  * Return: multiplied number
  */
int main(int argc, char *argv[])
{
	int  mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
