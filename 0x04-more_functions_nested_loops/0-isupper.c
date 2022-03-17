#include <stdio.h>
#include "main.h"
/**
 * _isupper - function that checks for all uppercase letters
 * @c: int type number
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
