#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a double linked list.
 *
 * @head: Double pointer to the the beginning of the double linked list.
 * @n: The value that the new node will contain.
 *
 * Return: The address of the new node, or NULL upon failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
