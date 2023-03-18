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

	while (i <= 8)
	{
		int j = i+1;

		while (j <= 9)
		{
			putchar(i+48);
			putchar(j+48);
			if (i == 8 && j ==9)
			{
				j++;
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
