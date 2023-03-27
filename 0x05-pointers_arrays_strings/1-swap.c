#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: integer to be swaped
 * @b: integer to be swaped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
