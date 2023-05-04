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

	if(!(*b))
		return (0);

	while(b[bit_n] != '\0')
	{
		if (b[bit_n] < '0' || b[bit_n] > '1')
			return (0);
		sum = 2 * sum + (b[bit_n] - '0');
		bit_n++;
	}
	return (sum);
}
