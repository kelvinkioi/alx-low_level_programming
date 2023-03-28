#include "main.h"

/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int r, p;

	r = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (r < 0)
				r = (r * 10) - (s[i] - '0');
			else
				r = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		r *= -1;

	return (r);
}
