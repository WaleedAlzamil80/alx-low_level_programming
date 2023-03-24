#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; column++)
		{
			for (column = 1; column <= size; column++)
			{
				if ((row + column) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
