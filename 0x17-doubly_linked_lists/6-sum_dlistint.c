#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) contained in each node of
 * a double linked list.
 *
 * @head: Pointer to the head of the double linked list.
 *
 * Return: The sum of the data(n) of all nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
