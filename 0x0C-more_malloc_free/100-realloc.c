#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: pointer to a block of memory
 * @old_size: unsigned integer
 * @new_size: unsigned integer
 * Return: NULL or the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(ptr1, ptr, old_size);
	}
	else
	{
		memcpy(ptr1, ptr, new_size);
	}
	free(ptr);
	return (ptr1);
}
