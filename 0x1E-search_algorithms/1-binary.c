#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * array: pointer to the first element of the array to search in
 * size: size of the array
 * value: value to search for in the array
 * Return: index of the value or -1 if value is not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, mid = 0, end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (end + start) / 2;

		printf("Searching in array: ");

		for (i = start; i <= end; ++i)
		{
			if (i != start)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
