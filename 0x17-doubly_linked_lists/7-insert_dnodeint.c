#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the linke list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, sum = 0;
	dlistint_t *new_node = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (*h);
	}
	i = idx - 1;
	while (new_node != NULL && sum != i)
	{
		sum++;
		new_node = new_node->next;
	}
	if (sum == i && new_node != NULL)
	{
		node->prev = new_node;
		node->next = new_node->next;
		if (new_node->next)
			new_node->next->prev = node;
		new_node->next = node;
		return (node);
	}
	free(node);
	return (NULL);
}
