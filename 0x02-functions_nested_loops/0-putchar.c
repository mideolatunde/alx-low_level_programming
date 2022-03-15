#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * write a program that prints _putchar, followed by a newline
 * Return: 0 (Success)
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
