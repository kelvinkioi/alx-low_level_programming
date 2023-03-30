#include "main.h"

/**
 * cap_string - capitalize each word in a string
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else if (s[j] >= 9 && s[j] <= 10)
				s[i] -= 32;
			else if (s[j] >= 32 && s[j] <= 34)
				s[i] -= 32;
			else if (s[j] >= 40 && s[j] <= 41)
				s[i] -= 32;
			else if (s[j] == 46)
				s[i] -= 32;
			else if (s[j] == 59)
				s[i] -= 32;
			else if (s[j] == 123 || s[j] == 125)
				s[i] -= 32;
		}
		i++;
	}

	return (s);
}
