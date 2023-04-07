#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: main C string to be scanned
 * @needle: small string to be searched with-in haystack string
 * Return: pointer to the first occurrence in haystack of any of the entire
 * sequence of characters specified in needle, or a null pointer
 * if the sequence is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int str = 0, string = 0;
	int field;
	char *temp;

	temp = haystack;
	for (str = 0; haystack[str] != '\0'; str++)
	{
		if (needle[0] == haystack[str])
		{
			field = 1;
			for (string = 1; needle[string] != '\0' && field == 1; string++)
			{
				if (needle[string] == haystack[str + string])
				{
				}
				else
				{
					field = 0;
				}
			}
		}
		if (needle[string] == '\0')
		{
			return (temp);
		}
		temp++;
	}
	return (0);
}
