#include<stdio.h>
#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 *            both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/
int _isalpha(int c)
{
	if ((c > 65) && (c < 123))
		return (1);
	else
		return (0);
}
