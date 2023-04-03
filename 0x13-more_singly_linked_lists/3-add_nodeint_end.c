#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
		*head = new_node;
	else
	{
		listint_t *tmp = *head;

		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	new_node->next = NULL;
	return (*head);
}
