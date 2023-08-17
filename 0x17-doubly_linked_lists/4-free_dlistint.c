#include "lists.h"

/**
 * free_dlistint - Frees up memory occupied by a double linked list.
 *
 * @head: Pointer to the head of the double linked list.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
