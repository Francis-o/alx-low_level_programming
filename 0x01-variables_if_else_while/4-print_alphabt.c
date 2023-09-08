#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints lower alphabets without q and e
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while ( i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
