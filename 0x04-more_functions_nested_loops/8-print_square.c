#include "main.h"
/**
 * print_square - prints square #
 * @size: size of square
 *
 * Return: Void
 */

void print_square(int size)
{
	int m;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size ; m++)
		{
			for (i = 0; i < size; i++)
			{
			_putchar(35);
			}
		_putchar('\n');
		}
	}
}

