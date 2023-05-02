#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: double pointer of the linked list
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
