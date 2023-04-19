#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if no elements or size is less than zero
 * also returns the index to the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
