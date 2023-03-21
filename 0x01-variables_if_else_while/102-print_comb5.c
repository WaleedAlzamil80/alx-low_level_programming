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

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int z = i + 1;

			while (z <= 9)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(z + 48);
				if (i == 7 && j == 8 && z == 9)
				{
					z++;
					break;
				}
				putchar(',');
				putchar(' ');
				z++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
