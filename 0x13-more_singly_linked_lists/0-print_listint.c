#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: A list to print all of its entries
 *
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	while (h->next)
	{
		_putchar(h->n);
	}
}
