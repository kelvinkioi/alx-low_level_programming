#include "lists.h"

/**
  * get_dnodeint_at_index -  finds the nth node of a dlistint_t linked list
  * @head: pointer to the  head of the doubly linked list
  * @index: index of the node, starting from 0
  * Return: node if it exists or null
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (head);
}
