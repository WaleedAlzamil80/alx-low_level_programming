#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the numbers from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 8; i++)
	{
		int j = i+1;

		for (; j <= 9; j++)
		{
			putchar(i+48);
			putchar(j+48);
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
