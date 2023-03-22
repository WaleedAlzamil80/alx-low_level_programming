#include <stdio.h>
#include "main.h"
/**
 * print_last_digit  - my function
 * @n: is the number to return its last digit
 *
 * Description: returning the last digit of the arguemnt
 *
 * Return: return the last digit of the function
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar((n % 10) + '0');
	return (n % 10);
}
