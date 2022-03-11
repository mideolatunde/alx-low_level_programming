#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base16 in lowercase.
 * Result: 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

