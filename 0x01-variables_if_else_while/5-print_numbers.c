#include <stdio.h>

/**
 * main - prints all numbers from 1 to 10 followed 
 * by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		printf("%d", c);
	}
	putchar('\n');
	return (0);
}
