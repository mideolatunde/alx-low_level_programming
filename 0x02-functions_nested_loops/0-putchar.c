#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * write a program that prints _putchar followed by a newline
 * Return: 0 Always
 */
int main(void)
{
	char *v = "_putchar";

	while (*v)
	{
		_putchar(*v);
		v++;
	}
	_putchar('\n');
	return (0);
}
