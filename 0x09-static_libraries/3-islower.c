#include<stdio.h>
#include "main.h"

/**
 * _islower - checks lowercase letter
 * @c: int c
 * Return: 1 if lowercase - 0 otherwise
 */
int _islower(int c)
{
	if ((c > 97) && (c < 123))
		return (1);
	else
		return (0);
}
