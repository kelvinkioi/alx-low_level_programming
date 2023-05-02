#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double point to the head of the list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (!(*head))
	{
		return (n);
	}
	if (*head != NULL)
	{
		tmp = (*head);
		n = (*head)->n;
		(*head) = (*head)->next;
		free(tmp);
	}
	else
	{
		free(*head);
		free(head);
	}
	return (n);
}
