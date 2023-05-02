#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: pointer to the head of the linked list
 *
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
