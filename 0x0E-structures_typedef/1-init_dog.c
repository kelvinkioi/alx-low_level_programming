#include "dog.h"
#include <stddef.h>
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
