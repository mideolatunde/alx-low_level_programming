#include <stdio.h>
#include "main.h"
/**
 * print-most_numbers - print most numbers
 *
 * Description: print the numbers, from 0 to 9, followed by a newline
 * Return: 0 Always
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
	return (0);
}

