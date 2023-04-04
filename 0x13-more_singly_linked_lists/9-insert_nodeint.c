#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
	{
		free(node);
		return (NULL);
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}

