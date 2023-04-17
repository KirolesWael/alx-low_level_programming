#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname;
	char *nowner;
	dog_t *d;

	d = malloc(sizeof(dog_t)
	if (d == NULL)
		return (NULL)
	nname = malloc(sizeof(name));
	if (!nname

	d->name = name;
	d->age = age;
	d->owner = owner;
}
