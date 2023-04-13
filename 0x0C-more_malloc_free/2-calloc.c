#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * from zero
 * @nmemb: unsigned integer
 * @size: unsigned integer
 * Return: NULL or string s
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		s[i] = 0;
	}
	return (s);
}
