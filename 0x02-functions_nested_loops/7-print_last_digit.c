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
		n = -n;

	int a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
