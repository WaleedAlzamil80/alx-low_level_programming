#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if c is a digit between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if it's digit. 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
