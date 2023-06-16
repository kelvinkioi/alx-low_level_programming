#include "lists.h"

/**
  * dlistint_len - counts the number of elements in a doubly linked list
  * @h: pointer to the doubly linked list
  * Return: the number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
