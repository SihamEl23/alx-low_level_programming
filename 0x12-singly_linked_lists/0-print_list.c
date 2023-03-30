#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;
	const list_t *tmp;

	tmp = h;
	while (tmp)
	{
		if (!tmp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		num_nodes++;
		tmp = tmp->next;
	}

	return (num_nodes);
}
