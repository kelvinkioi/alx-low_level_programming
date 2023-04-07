#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes of memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byte;

	for (byte = 0; byte < n; byte++)
		s[byte] = b;
	return (s);
}
