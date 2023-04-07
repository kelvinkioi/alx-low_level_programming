#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: main C string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return: number of characters in the initial segment of s which consist
 * only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int string;
	unsigned int counter = 0;

	while (*s)
	{
		for (string = 0; accept[string]; string++)
		{
			if (*s == accept[string])
			{
				counter++;
				break;
			}
			else if (accept[string + 1] == '\0')
			{
				return (counter);
			}
		}
		s++;
	}
	return (counter);
}
