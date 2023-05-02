#include "lists.h"

/**
 * size_t listint_len - prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
