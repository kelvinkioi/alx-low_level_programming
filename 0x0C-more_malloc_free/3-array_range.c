#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL or string s
 */

int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		s[i] = min + i;
	}
	return (s);
}
