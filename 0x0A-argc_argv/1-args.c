#include <stdio.h>

/**
  * main - function printing num of args
  * @argc: nom of args
  * @argv: array of strings
  * Return: 0 upon success
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
