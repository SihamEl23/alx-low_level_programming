#include "lists.h"

/**
 * print_dlistint - Prints the elements of a double linked list.
 * @h: Pointer to the head of the double list.
 * Return: The size of the double linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
