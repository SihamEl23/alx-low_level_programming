#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	if (!*head)
		*head = new_node;
	else
	{
		list_t *tmp = *head;

		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	new_node->next = NULL;
	return (*head);
}
