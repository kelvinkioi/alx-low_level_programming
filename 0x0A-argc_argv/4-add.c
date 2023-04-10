#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _atoi - Convert a string to integer.
 * @s: char array string
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
/**
 * main - entry point
 * @argc: integer
 * @argv: array of strings
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
