#include <stdio.h>
#include "main.h"
/**
 * _islower - my function
 * Description: checking if the letter c is in lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
