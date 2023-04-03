#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the destination array where the content is to be copied
 * @src: pointer to the source of data to be copied
 * @n: number of bytes to be copied
 * Return: pointer to destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int byte;

	for (byte = 0; byte < n; byte++)
		dest[byte] = src[byte];

	return (dest);
}
