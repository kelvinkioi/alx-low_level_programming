#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: A pointer to head of list
 * Return: count which is the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] (nil)\n", 0);
		}
		h = h->next;
		count++;
	}
	return (count);
}
