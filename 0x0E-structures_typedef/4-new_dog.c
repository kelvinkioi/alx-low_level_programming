#include "dog.h"
#include <stdlib.h>
/**
 * _strlen -  function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * @src: string to be copied from
 * @dest: String to copy to
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: pointer to a string
 * @age: floating number
 * @owner: pointer to a string
 *
 * Return: NULL if the function fails, otherwise doggy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (len1 + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
