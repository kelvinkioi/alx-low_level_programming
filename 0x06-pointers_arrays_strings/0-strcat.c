#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = strlen(dest);

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
