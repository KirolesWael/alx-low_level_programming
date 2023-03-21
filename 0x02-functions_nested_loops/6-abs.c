#include<stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @i: take input valaues for the function
 *
 * Return: Always 0 (Success)
*/

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i == 0)
	{
		return (0);
	}
	else
	{
		return (0 - i);
	}
}
