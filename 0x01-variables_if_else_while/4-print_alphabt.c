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

	while (character <= 'z')
	{
		if (character == 'q' || character == 'e')
		{
			character++;
			continue;
		}
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
