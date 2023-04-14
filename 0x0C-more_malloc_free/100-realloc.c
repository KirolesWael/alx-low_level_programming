#include "main.h"

/**
  * *_realloc - reallocates new place in memory
  * @ptr : pointer to old location
  * @old_size : old size of pointer
  * @new_size : new needed size
  *
  * Return: pointer to the new location
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	char *oldptr;
	unsigned int i;

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (!newptr)
			return (NULL);
		return (newptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	oldptr = ptr;
	if (new_size > old_size)
	{
		newptr = malloc(new_size);

		if (!newptr)
			return (NULL);
		for (i = 0; i < old_size; i++)
			newptr[i] = oldptr[i];
	}
	if (new_size < old_size)
	{
		newptr = malloc(new_size);
		if (!newptr)
			return (NULL);
		for (i = 0; i < new_size; i++)
			newptr[i] = oldptr[i];
	}
	free(ptr);
	return (newptr);
}
