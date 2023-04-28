#include "lists.h"
/**
 * add_node - A function that adds a new node at the beginning of a list
 * @head: The head of the linked list.
 * @str: string value for the new node
 * Return: address of the new node or NULL it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	size_t count;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	add_node->len = count;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
