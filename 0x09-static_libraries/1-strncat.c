#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = strlen(dest);

	while (i < n && *src != '\0')
	{
		dest[len + i] = *src;
		src++;
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
