#include "main.h"
/**
 * print_line - prints the _ character
 * @n: integer to determine number of output
 *
 * Return: void
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n ; m++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
