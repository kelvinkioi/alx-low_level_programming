#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a doubly linked list
  * @head: pointer head of the doubly linked list
  * @n: integer
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *(head);

	dlistint_t *k = malloc(sizeof(dlistint_t));

	if (k == NULL)
		return (NULL);

	*(head) = k;
	k->n = n;
	k->prev = NULL;

	if (temp == NULL)
		k->next = NULL;
	else
	{
		k->next = temp;
		temp->prev = *(head);
		temp = NULL;
	}

	return (k);
}
