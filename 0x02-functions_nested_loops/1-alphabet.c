#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * Description: printing letters
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
