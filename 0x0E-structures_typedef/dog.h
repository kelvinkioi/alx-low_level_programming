#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure that stores info about a dog
 * @name: pointer to a string
 * @age: float that contains age
 * @owner: pointer to a string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif

