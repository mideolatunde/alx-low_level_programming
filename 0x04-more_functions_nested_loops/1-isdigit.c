#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Check for digits 0 to 9
 * @c: int type param
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
