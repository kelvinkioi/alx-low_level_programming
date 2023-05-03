#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node any position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added starts 0
 * @n: unsigned integer
 * Return: Null if it failed, or the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = (*head);
	listint_t *tmp;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (!tmp || !head)
	{
		return (0);
	}
	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = (*head);
		(*head) = tmp;
		return (tmp);
	}
	for (; ptr != NULL && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			tmp->next = ptr->next;
			ptr->next = tmp;
			return (tmp);
		}
		ptr = ptr->next;
	}
	return (0);
}
