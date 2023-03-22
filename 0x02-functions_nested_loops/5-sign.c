#include <stdio.h>
#include "main.h"
/**
 * print_sign - my function
 * @n: is the number to be checked
 * Description: checking if the argument n is a greater or less or equal to zero
 * Return: 1 if the argument n is greater than 1, 0 equal to 0, -1 less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
