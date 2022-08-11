#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: A linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
				current->str != NULL ? current->str : "(nil)");
		current = current->next;
		count++;
	}
	return (count);
}
