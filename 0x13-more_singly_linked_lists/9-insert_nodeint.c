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
	listint_t *node, *tmp, *tp;
	unsigned int i = 1;

	node = (listint_t *)malloc(sizeof(listint_t *));
	if (!node || !head)
		return (NULL);
	node->n = n;
	tmp = *head;
	tp = tmp->next;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (tp)
	{
		if (i == idx)
		{
			node->next = tp;
			tmp->next = node;
			return (node);
		}
		tp = tp->next;
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
