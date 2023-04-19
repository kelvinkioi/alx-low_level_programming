#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: pointer to a variable int
 * @size: size of array
 * @action: Function pointer
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
