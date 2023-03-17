#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: printing the alphabets
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char character = 'a';
	char character2 = 'A';

	while (character <= 'z')
	{
		putchar(character);
		character++;
	}
	while (character2 <= 'Z')
	{
		putchar(character2);
		character2++;
	}
	putchar('\n');
	return (0);
}
