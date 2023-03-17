#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - printing the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char character = 'a';
	while (character < 'z')
	{
		putchar(character);
		character++;
	}
	putchat("\n");

	return (0);
}
