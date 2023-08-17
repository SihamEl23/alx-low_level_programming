#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a double linked list.
 * @h: Pointer to the head of the double list.
 * Return: The size of the double linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
