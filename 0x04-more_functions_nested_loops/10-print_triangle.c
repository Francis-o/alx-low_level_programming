#include "main.h"

/**
 * print_triangle - prints triangle with #
 * @size: size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i <= (size - j))
				{
					_putchar('');
				}
				else
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
