#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elm = 0;
	const listint_t *tmp;

	tmp = h;

	while (tmp)
	{
		num_elm++;
		tmp = tmp->next;
	}
	return (num_elm);
}
