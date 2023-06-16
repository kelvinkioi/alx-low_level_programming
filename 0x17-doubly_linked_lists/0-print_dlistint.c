#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: pointer to double linked list to print
 * Return: i number of nodes of the double linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
