#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: A pointer to the head of a singly linked list
 * Return: (void)
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while ((tmp = head))
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
