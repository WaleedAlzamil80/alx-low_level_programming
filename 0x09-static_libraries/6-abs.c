#include <stdio.h>
#include "main.h"
/**
 * _abs - my function
 * @n: is the number to be checked
 *
 * Description: checking if the argument n is a greater
 * or less or equal to zero and then print the absolute
 *
 * Return: 1 if the argument n is greater than 1, 0 equal to 0, -1 less than 0
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
