#include<stdio.h>
#include "main.h"

/**
 *_islower - checks if low
 * Description : checks if char is lower
 * @c (int)
 * Return : 1 (lower) , 0 otherwise
 */
int _islower(int c)
{
	if ((c > 97) && (c < 123))
		return 1;
	else
		return 0;
}
