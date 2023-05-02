#include "lists.h"
/**
  * add_nodeint_end - function that adds a new node
  * at the end of a listint_t list
  * @head: double pointer to the head of the linked list
  * @n: constant  interger to be added at the end of the list
  *
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *tmp;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	tmp = *head;

	add_node->n = n;
	add_node->next = NULL;

	if (tmp == NULL)
	{
		*head = add_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = add_node;
	}

	return (*head);
}
