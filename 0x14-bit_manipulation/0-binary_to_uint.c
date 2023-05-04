#include "main.h"

/**
 * binary_to_uint: Write a function that 
 *		converts a binary number to an unsigned int
 *
 * @b: pointer that points to the first of a string
 *
 * Return: return an integer or (0) in other cases
 */

unsigned int binary_to_uint(const char *b)
{
	int bit_n = 0;
	int sum = 0;

	if(!b)
		return (0);
	while(!b)
	{
		if(*b == '1')
			sum = sum + (2 << bit_n);
		else if(*b == '0')
			sum = sum
		else
			return (0);
		bit_n++;
	}
	return (sum);
}
