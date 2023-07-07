#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: the number to be printed
 *
 * Return: None
 */

void print_binary(unsigned long int n)
{
	while (n > 1)
	{
		print_binary(n);
	}
	_putchar((n & 1) + '0');
}
