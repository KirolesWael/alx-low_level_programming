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
	int i;
	char *nname;
	char *nowner;
	dog_t *d;
	
	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nname = malloc(sizeof(name));
	if (!nname)
		return (NULL);

	nowner = malloc(sizeof(owner));
	if (!nowner)
		return (NULL);
	i = 0;
	while (name[i])
	{
		nname[i] = name[i];
		i++;
	}
	nname[i] = '\0';
	i = 0;
	while (owner[i])
	{
		nowner[i] = owner[i];
		i++;
	}
	nowner[i] = '\0';
	d->name = nname;
	d->age = age;
	d->owner = nowner;
	return (d);
}
