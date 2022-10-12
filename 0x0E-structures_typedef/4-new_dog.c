#include "dog.h"
#include <stdlib.h>
/**
* _strlen -string length
* @s: string
* Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
/**
* _strcpy - copy a string from one address to another
* @src: source to copy
* Return: pointer of dest
*/
char *_strcpy(char *src)
{
	int i = 0;
	char *dest;

	dest = malloc(sizeof(char) * _strlen(src) + 1);
	if (dest == NULL)
	return (NULL);

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - new dog on the block
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: a dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *N;
	char *O;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	N = _strcpy(name);
	if (N == NULL)
	{

		free(dog);
		return (NULL);
	}
	O = _strcpy(owner);
	if (O == NULL)
	{
		free(dog);
		free(N);
		free(O);
		return (NULL);
	}
	dog->name = N;
	dog->owner = O;
	dog->age = age;

	return (dog);
}
