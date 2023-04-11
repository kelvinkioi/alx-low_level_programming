#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat -  function that concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: NULL on failure, on sucess string s
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
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
	s = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	memcpy(s, s1, len1);
	memcpy(s + len1, s2, len2 + 1);
	return (s);
}
