#include <stdio.h>
/**
 * main - Entry point
 * Description: printing the numbers from 0 to 9
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (int i = 0; i <= 8; i++)
	{
		for (int j = i+1; j <= 9; j++)
		{
			putchar(i+48);
			putchar(j+48);
			if (i == 8 && j ==9)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
