#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the end of a list
 * @head:A pointer to the head of the linked list
 * @str: string value for the new node
 * Return: address of the new node, or NULL it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *tmp;
	size_t count;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	add_node->len = count;
	add_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = add_node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = add_node;
	}

	return (*head);
}
