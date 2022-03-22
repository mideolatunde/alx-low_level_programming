#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i++])
	{
		j++;
	}

	for (i = 0; i < x; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
