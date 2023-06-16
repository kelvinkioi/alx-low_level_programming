#include "lists.h"

/**
* delete_dnodeint_at_index - delete node
* @head: parameter
* @index: parameter
* Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *p;
	unsigned int i = 0;

	new = *head;

	if (new != NULL)
		while (new->prev != NULL)
			new = new->prev;

	while (new != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = new->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				p->next = new->next;

				if (new->next != NULL)
					new->next->prev = p;
			}

			free(new);
			return (1);
		}
		i++;
		p = new;
		new = new->next;
	}

	return (-1);
}
