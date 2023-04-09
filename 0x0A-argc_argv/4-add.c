#include<stdio.h>
#include<stdlib.h>
/**
  * main - adds all positive nums
  * @argc: num of args
  * @argv: args names
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
