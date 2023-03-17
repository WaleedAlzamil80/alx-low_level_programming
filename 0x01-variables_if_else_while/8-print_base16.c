#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the numbers from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 0;
	char a = 'a';

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
