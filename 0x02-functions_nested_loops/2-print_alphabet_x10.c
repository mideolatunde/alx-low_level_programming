#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a_count;

	while (a_count < 10)
	{
		char m = 'a';

		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		a_count++;
		_putchar('\n');
	}
}
