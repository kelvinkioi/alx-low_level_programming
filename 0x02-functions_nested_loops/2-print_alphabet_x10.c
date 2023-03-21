#include "main.h"
/**
 * print_alphabet_x10 - prints 10times alphabet
 *
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar (x);
		_putchar('\n');
	}
}
