#include "main.h"

/**
 * print_numbers - task 3
 * Description - prints numbers
 */

void print_numbers(void)
{
	for (int c = 0; C <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c);
		}	
	}
	_putchar('\n');
}
