#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */
void print_alphabet_x10(void)
{
	int a_count = 0;

	while (a_count < 10)
	{
		char  m = 'a';

		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		a_count++;
		_putchar('\n');
	}
}
