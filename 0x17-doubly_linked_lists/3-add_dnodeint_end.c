#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 * @n: integer
 * Return: Number of elements in a linked list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		new->next = NULL;
		new->prev = current;
		current->next = new;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
