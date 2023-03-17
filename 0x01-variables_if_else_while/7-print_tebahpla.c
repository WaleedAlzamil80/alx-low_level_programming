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
	char character = 'z';
	
	while (character >= 'a')
	{
		putchar(character);
		character--;
	}
	putchar('\n');
	return (0);
}
