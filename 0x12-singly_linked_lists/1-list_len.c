#include "lists.h"
/**
 * list_len - A function that prints the number of elements of a list_t list
 * @h: pointer to head of the linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
