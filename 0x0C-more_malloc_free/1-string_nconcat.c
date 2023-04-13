#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n: unsigned int
 * Return: string s
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	s = (char *) malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	memcpy(s, s1, len1);
	memcpy(s + len1, s2, n);
	s[len1 + n] = '\0';
	return (s);
}
