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
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i = 2 || i = 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
