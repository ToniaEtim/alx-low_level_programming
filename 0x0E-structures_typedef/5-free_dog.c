#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function frees dog
 * @d - pointer to the structure
 * Return: none
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
