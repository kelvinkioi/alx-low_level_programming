#include "main.h"
#include <string.h>
/**
 *rev_string - function that reverses a string
 *@s: string
 *Return: Void
 */

void rev_string(char *s)
{
	 int len = strlen(s);
	 int i;

	for (i = 0; i < len / 2; i++)
	{
		char x = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = x;
	}
}
