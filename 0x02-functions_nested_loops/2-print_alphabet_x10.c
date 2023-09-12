#include "main.h"

/**
 * print_alphabet_x10 - prints a - z ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int itr;

	for (itr = 0; itr < 10; itr++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		-putchar('\n');
	}
}
