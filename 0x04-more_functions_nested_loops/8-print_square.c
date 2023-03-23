#include "main.h"

/**
 * print_square - print a diagonal line
 *
 * @size: is the size of the square
 * should be printed
 */
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; column++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
