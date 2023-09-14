#include "main.h"

/**
 * print_line - draws straight line
 * @n: lenght of line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
