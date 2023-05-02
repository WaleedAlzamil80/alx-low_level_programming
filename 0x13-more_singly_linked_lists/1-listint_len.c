#include "lists.h"

/**
 * size_t listint_len - prints all the elements of a listint_t list
 * @h: linked list of type listint_t to print
 * Description: Write a function that returns the number of elements in a linked listint_t list
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
