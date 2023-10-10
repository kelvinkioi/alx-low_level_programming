#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * ntegers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first index where value is located and if NULL return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
