#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL && *head != NULL)
	{
		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
}
