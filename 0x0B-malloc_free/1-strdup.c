#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: returns NULL if str is null and if insufficient memory
 * and also returns the duplicate string s
 */

char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *s = malloc(sizeof(char) * (length) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != 0)
	{
		length++;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
