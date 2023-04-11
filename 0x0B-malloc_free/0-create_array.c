#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: unsigned integer
 * @c: character
 * Return: NULL if size is zero and s is null
 * also returns a the array s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = (char *) malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);

}
