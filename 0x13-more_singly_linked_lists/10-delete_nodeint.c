#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: double pointer
 * @index:  index of the node that should be deleted
 * Return: (1) on success (-1) on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = (*head);
	listint_t *tmp;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = ptr->next;
		free(ptr);
		return (1);
	}
	for (i = 0; ptr != NULL && i <= index; i++)
	{
		if (i == index - 1)
		{
			tmp = ptr;
			ptr = ptr->next;
			tmp->next = ptr->next;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
