#include <stdio.h>
#include "main.h"
/**
 * _isalpha - my function
 * @c: is the character to be checked
 * Description: checking if theargument c is a letter
 * Return: 1 if the argument c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	return((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'z'));
}
