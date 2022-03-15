#include <stdio.h>
#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return - 0 always success
 */
int main(void)
{
	char *v = "_putchar";

	while (*v)
	{
		_putchar(*v);
		v++;
	}
	_putchar('\n);
return (0);
}
