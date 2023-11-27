#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function taht gets  the length of a string
 * @str: the string to be measured
 *
 * Return: The length of the string @str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - a functio that return dest with a copy of a string from src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog -  creates a new dog.
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the owner of the new dog
 *
 * Return: 0;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
