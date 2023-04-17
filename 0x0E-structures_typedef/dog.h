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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

