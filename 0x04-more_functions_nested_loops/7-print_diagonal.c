#include "main.h"
/**
 * print_diagonal - prints the \ character
 * @n: number of times \ to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n ; m++)
		{
			for (i = 0; i < m; i++)
			{
			_putchar(32);
			}
	_putchar(92);
	_putchar('\n');
		}
	}
}
