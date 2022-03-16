#include <stdio.h>
#include "main.h"
/*8
 * print_alphabet - a function that prints the alphabets in
 * lowercase
 * Return: 0 Always
 */
void print_alphabet(void)
{
	int m;

	for (m >= 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
