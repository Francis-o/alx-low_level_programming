#include "main.h"

/**
 * print_square - prints a siquare, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
