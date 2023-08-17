#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a double linked list.
 *
 * @head: Double pointer to the the beginning of the double linked list.
 * @n: The value that the new node will contain.
 *
 * Return: The address of the new node, or NULL upon failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->next = NULL;

	if (*head != NULL)
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
