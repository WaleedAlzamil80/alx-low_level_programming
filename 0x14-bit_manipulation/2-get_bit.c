#include "main.h"
/**
 * get_bit -  value of a bit at a given index.
 * @index: (unsigned int) is the index, starting from 0 
 * of the bit you want to get
 *
 * @n: (unsigned long int) the number
 * Return: (int) the value at this index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int v, i = 0;
	for (; i < index; i++)
	{
		if (n <= 1)
			return (-1);
		n = n >> 1;
	}
	return (n & 1);
}
