#include "dog.h"

/**
 * init_dog - variable struct for dog
 * @d: pointer to dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
