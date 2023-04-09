#include <stdio.h>

/**
  * main - main func
  * @argc: num of args
  * @argv: names of args
  * Return: zero
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
