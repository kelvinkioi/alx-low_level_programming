#include "main.h"
#include <string.h>
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
