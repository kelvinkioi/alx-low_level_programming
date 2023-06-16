#include "lists.h"

/**
  * free_dlistint -frees a doubly linked list
  * @head: pointer to the head of the doubly linked list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = (head)->next;
			free(temp);
		}
	}
}
