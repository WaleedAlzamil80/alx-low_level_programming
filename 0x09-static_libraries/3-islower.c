#include <stdio.h>
#include "main.h"
/**
 * _islower - my function
 * @c: is the character to be checked
 * Description: checking if the letter c is in lowercase
 * Return: 1 if the char is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
