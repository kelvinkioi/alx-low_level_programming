#include "lists.h"

/**
  * sum_dlistint - returns sum of all the data (n) of a linked list
  * @head: pointer to the  head of the doubly linked list.
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
