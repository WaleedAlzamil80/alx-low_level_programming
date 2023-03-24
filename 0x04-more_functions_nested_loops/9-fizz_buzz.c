#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * mul of 3 print Fizz
 * mul of 5 print Buzz
 * mul of both 3 & 5 print FizzBuzz
 * everything is separated by space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");

		else if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");

		else if (!(num % 3 == 0) && num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
