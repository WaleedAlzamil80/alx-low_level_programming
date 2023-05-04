#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int bit_n = 0;
	int sum = 0;

	if (!(*b))
		return (0);

	while (b[bit_n] != '\0')
	{
		if (b[bit_n] < '0' || b[bit_n] > '1')
			return (0);
		sum = 2 * sum + (b[bit_n] - '0');
		bit_n++;
	}
	return (sum);
}
