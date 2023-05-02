#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	int i = index;
	int count = 0;

	while (tmp && count != i)
	{
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}
