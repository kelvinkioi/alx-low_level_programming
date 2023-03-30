#include "main.h"
/**
 * reverse_array - reverse an array of integers
 * @a: array
 * @n: number of elements of the array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
