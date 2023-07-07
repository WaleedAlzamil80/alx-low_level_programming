#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to a char
 *
 * Return: unsigned int that represent the char passed
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, n = 0, len = 0;
	unsigned int k = 1;

 	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			n += k;
		k *= 2;
	}
	return (n);
}
