#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position of a
 * double linked list.
 *
 * @h: Double pointer to the head of the double linked list.
 * @idx: Index to insert the new node. With the head being 0.
 * @n: The value the new node will contain.
 *
 * Return: The address of the new node or NULL upon failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *before;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	before = *h;
	count = 1;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (before != NULL)
	{
		if (count == idx)
			break;
		before = before->next;
		count++;
	}
	if (count != idx)
	{
		free(new);
		return (NULL);
	}

	new->next = before->next;
	new->prev = before;

	if (before->next != NULL)
		(before->next)->prev = new;
	before->next = new;

	return (new);
}
