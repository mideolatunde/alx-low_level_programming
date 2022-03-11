#include <stdio.h>

/**
 * main - main block 
 * Result: 0 (Success)
 */
int main(void)
{
	int c;
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

