#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase.
 *
 * Return : Always 0.
 */
void print_alphabet(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
