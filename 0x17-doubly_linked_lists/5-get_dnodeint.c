#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a double linked list.
 *
 * @head: Pointer to the head of the double linked list.
 * @index: The nth node to retrieve.
 *
 * Return: Address of the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 1;

	if (head == NULL || index == 0)
		return (head);

	while (head != NULL)
	{
		if (count == index)
			return (head->next);
		head = head->next;
		count++;
	}
	return (NULL);
}
